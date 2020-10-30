#ifndef __QUERY_H
#define __QUERY_H

#include <algorithm>

#include "../c12/textquery.h"

// -----------------------------------------------------------------------------
// Definition of Query_base

class Query;

class Query_base {
    friend class Query;
protected:
    using line_no = TextQuery::line_no;
    virtual ~Query_base() = default;
private:
    virtual QueryResult eval(const TextQuery& word) const = 0;
    virtual std::string rep() const = 0;
};

// -----------------------------------------------------------------------------
// Definition of Query

class Query {
    friend Query operator~(const Query&);
    friend Query operator&(const Query&, const Query&);
    friend Query operator|(const Query&, const Query&);
public:
    Query(const std::string&);
    QueryResult eval(const TextQuery& t) const { return q->eval(t); }
    std::string rep() const { return q->rep(); }
private:
    Query(std::shared_ptr<Query_base> query) : q(query) { }
    std::shared_ptr<Query_base> q;
};

// -----------------------------------------------------------------------------
// Definition of WordQuery

class WordQuery : public Query_base {
    friend class Query;
private:
    WordQuery(const std::string& w) : word(w) { }
    QueryResult eval(const TextQuery& t) const { return t.query(word); }
    std::string rep() const { return word; }
    std::string word;
};

// -----------------------------------------------------------------------------
// Definition of NotQuery

class NotQuery : public Query_base {
    friend Query operator~(const Query&);
private:
    NotQuery(const Query& q) : query(q) { }
    QueryResult eval(const TextQuery& t) const;
    std::string rep() const { return "~(" + query.rep() + ")"; }
    Query query;
};

// -----------------------------------------------------------------------------
// Definition of BinaryQuery

class BinaryQuery : public Query_base {
protected:
    BinaryQuery(const Query& l, const Query& r, const std::string& op)
        : lhs(l), rhs(r), opSym(op) { }
    QueryResult eval(const TextQuery& t) const;
    std::string rep() const { return "(" + rhs.rep() + " "
                                         + opSym + " "
                                         + lhs.rep() + ")"; }
    Query lhs;
    Query rhs;
    std::string opSym;
};

// -----------------------------------------------------------------------------
// Definition of AndQuery

class AndQuery : public BinaryQuery {
    friend Query operator&(const Query&, const Query&);
private:
    AndQuery(const Query& l, const Query& r) : BinaryQuery(l, r, "&") { }
    QueryResult eval(const TextQuery& t) const;
};

// -----------------------------------------------------------------------------
// Definition of OrQuery

class OrQuery : public BinaryQuery {
    friend Query operator|(const Query&, const Query&);
private:
    OrQuery(const Query& l, const Query& r) : BinaryQuery(l, r, "|") { }
    QueryResult eval(const TextQuery& t) const;
};

// -----------------------------------------------------------------------------
// Implement of Query_base

// have no

// -----------------------------------------------------------------------------
// Implement of Query

inline std::ostream&
operator<<(std::ostream& os, const Query& q) {
    return os << q.rep();
}

inline
Query::Query(const std::string& str) : q(new WordQuery(str)) { }

inline Query
operator~(const Query& q) {
    return std::shared_ptr<Query_base>(new NotQuery(q));
}

inline Query
operator&(const Query& l, const Query& r) {
    return std::shared_ptr<Query_base>(new AndQuery(l, r));
}

inline Query
operator|(const Query& l, const Query& r) {
    return std::shared_ptr<Query_base>(new OrQuery(l, r));
}

// -----------------------------------------------------------------------------
// Implement of WordQuery

// have no

// -----------------------------------------------------------------------------
// Implement of NotQuery

QueryResult
NotQuery::eval( const TextQuery& t ) const {
    auto result = query.eval(t);
    auto ret_lines = std::make_shared<std::set<line_no>>();
    auto beg = result.begin(), end = result.end();
    auto sz = result.get_file()->size();
    for(size_t n = 0; n < sz; ++n) {
        if( beg == end || *beg != n ) ret_lines->insert(n);
        else if( beg != end ) ++beg;
    }
    return QueryResult(rep(), ret_lines, result.get_file());
}

// -----------------------------------------------------------------------------
// Implement of BinaryQuery

// have no

// -----------------------------------------------------------------------------
// Implement of AndQuery

QueryResult
AndQuery::eval(const TextQuery& t) const {
    auto left = lhs.eval(t), right = rhs.eval(t);
    auto ret_lines = 
        std::make_shared<std::set<line_no>>();
    std::set_intersection(left.begin(), left.end(), right.begin(), right.end(),
                          std::inserter(*ret_lines, ret_lines->begin()));
    return QueryResult(rep(), ret_lines, left.get_file());
}

// -----------------------------------------------------------------------------
// Implement of OrQuery

QueryResult
OrQuery::eval(const TextQuery& t) const {
    auto left = lhs.eval(t), right = rhs.eval(t);
    auto ret_lines = 
        std::make_shared<std::set<line_no>>(left.begin(), left.end());
    ret_lines->insert(right.begin(), right.end());
    return QueryResult(rep(), ret_lines, left.get_file());
}

#endif