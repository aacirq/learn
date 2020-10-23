#include <iostream>
#include <string>

class TreeNode {
public:
    TreeNode() : 
        value(std::string()), count(new int(1)), left(nullptr), right(nullptr) { }
    TreeNode(const TreeNode& tn) : 
        value(tn.value), count(tn.count), left(tn.left), right(tn.right) { ++*count; }
    TreeNode& operator=(const TreeNode& rhs);
    ~TreeNode();

private:
    std::string value;
    int*        count;
    TreeNode*   left;
    TreeNode*   right;
};

TreeNode& TreeNode::operator=(const TreeNode& rhs) {
    if(this == &rhs) return *this;
    ++*rhs.count;
    if(--*count) {
        delete count;
        delete left;
        delete right;
    }
    value = rhs.value;
    count = rhs.count;
    left  = rhs.left;
    right = rhs.right;
    return *this;
}

TreeNode::~TreeNode() {
    if(--*count == 0) {
        delete count;
        delete left;
        delete right;
    }
}

class BinStrTree {
public:
    BinStrTree() : root(new TreeNode()) { }
    BinStrTree(const BinStrTree& tree) : root(new TreeNode(*tree.root)) { }
    BinStrTree& operator=(const BinStrTree& rhs) {
        if(this == &rhs) return *this;
        delete root;
        root = new TreeNode(*rhs.root);
        return *this;
    }
    ~BinStrTree() { delete root; }

private:
    TreeNode* root;
};