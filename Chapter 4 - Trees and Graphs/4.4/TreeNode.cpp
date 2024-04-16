
#include "TreeNode.hpp"

bool TreeNode::is_balanced(TreeNode *root)
{
    return TreeNode::dfs_depth(root) != -1;
}

int TreeNode::dfs_depth(TreeNode *node)
{
    if(node == nullptr) return 0;

    int left = TreeNode::dfs_depth(node->left);
    if(left == -1) return -1;

    int right = TreeNode::dfs_depth(node->right);
    if(right == -1) return -1;

    if(std::abs(left - right) > 1) return -1;
    else return std::max(left, right) + 1;

}
