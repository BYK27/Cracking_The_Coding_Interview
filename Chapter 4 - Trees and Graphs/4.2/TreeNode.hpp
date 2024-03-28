#ifndef INC_4_2_TREENODE_HPP
#define INC_4_2_TREENODE_HPP


class TreeNode
{
public:
    int value;
    TreeNode* left;
    TreeNode* right;
    explicit TreeNode(int v):value(v), left(nullptr), right(nullptr){}
};


#endif //INC_4_2_TREENODE_HPP
