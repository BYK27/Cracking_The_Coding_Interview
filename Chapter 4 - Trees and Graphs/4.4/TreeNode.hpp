#ifndef INC_4_4_TREENODE_HPP
#define INC_4_4_TREENODE_HPP

#include <cmath>
#include <algorithm>

class TreeNode
{
private:
    static int dfs_depth(TreeNode* node);
public:
    int value;
    TreeNode* left;
    TreeNode* right;
    explicit TreeNode(int v):value(v), left(nullptr), right(nullptr){}

    static bool is_balanced(TreeNode* root);

};


#endif //INC_4_4_TREENODE_HPP
