#ifndef __TEXT_QUERY_H
#define __TEXT_QUERY_H

#include <sstream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <memory>

class QueryResult;

// -----------------------------------------------------------------------------
// Definition of class TextQuery

class TextQuery {
public:
    typedef std::vector<std::string>::size_type line_no;
    TextQuery(std::ifstream& infile);
    QueryResult query(const std::string& str) const;

private:
    std::shared_ptr<std::vector<std::string>> data;
    std::map<std::string, std::shared_ptr<std::set<line_no>>> exist_line;
};

// -----------------------------------------------------------------------------
// EDefinition of class QueryResult

class QueryResult {
public:
    QueryResult(const std::string& w,
                const std::shared_ptr<std::set<TextQuery::line_no>>& p,
                const std::shared_ptr<std::vector<std::string>>& f)
        : word(w), ptr(p), file(f) { }
    friend std::ostream& print(std::ostream& ostrm, const QueryResult& qr);
    std::set<TextQuery::line_no>::iterator begin() const { return ptr->begin(); }
    std::set<TextQuery::line_no>::iterator end() const { return ptr->end(); }
    std::shared_ptr<std::shared_ptr<std::vector<std::string>>> get_file() const { 
        return std::make_shared<std::shared_ptr<std::vector<std::string>>>(file);
    }

private:
    std::string word;
    std::shared_ptr<std::set<TextQuery::line_no>> ptr;
    std::shared_ptr<std::vector<std::string>> file;
};

// -----------------------------------------------------------------------------
// Implementation of API of class TextQuery

TextQuery::TextQuery(std::ifstream& infile)
: data(std::make_shared<std::vector<std::string>>()) {
    std::string line;
    size_t ind = 0;
    while(std::getline(infile, line)) {
        data->push_back(line);
        std::istringstream isstm(line);
        std::string word;
        while(isstm >> word) {
            auto &lines_no = exist_line[word];
            if(!lines_no) {
                lines_no.reset(new std::set<line_no>);
            }
            lines_no->insert(ind);
        }
        ++ind;
    }
}

QueryResult TextQuery::query(const std::string& str) const {
    static std::shared_ptr<std::set<line_no>> nodata(new std::set<line_no>);
    auto itr = exist_line.find(str);
    if(itr == exist_line.end())
        return QueryResult(str, nodata, data);
    else
        return QueryResult(str, itr->second, data);
}

// -----------------------------------------------------------------------------
// Implementation of API of QueryResult

std::ostream& print(std::ostream& ostrm, const QueryResult& qr) {
    ostrm << qr.word << " occurs " << qr.ptr->size() << " times" << std::endl;
    for(auto itr = qr.ptr->begin(), e = qr.ptr->end(); itr != e; ++itr) {
        ostrm << "    (line " << *itr << ") " << qr.file->at(*itr) << std::endl;
    }
    return ostrm;
}

#endif