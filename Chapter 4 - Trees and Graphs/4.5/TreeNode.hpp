#ifndef INC_4_5_TREENODE_HPP
#define INC_4_5_TREENODE_HPP

#include <limits>

class TreeNode
{
private:
    static bool dfs_BST(TreeNode* node, int min, int max);
public:
    int value;
    TreeNode* left;
    TreeNode* right;
    explicit TreeNode(int v):value(v), left(nullptr), right(nullptr){}

    static bool is_BST(TreeNode* root);


};


#endif //INC_4_5_TREENODE_HPP
