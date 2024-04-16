#include "TreeNode.hpp"

bool TreeNode::dfs_BST(TreeNode *node, int min, int max)
{
    if(node == nullptr) return true;

    if(node->value <= min || node->value >= max) return false;

    return TreeNode::dfs_BST(node->left, min, node->value) && TreeNode::dfs_BST(node->right, node->value, max);
}

bool TreeNode::is_BST(TreeNode *root)
{
    return TreeNode::dfs_BST(root, std::numeric_limits<int>::min(), std::numeric_limits<int>::max());
}
