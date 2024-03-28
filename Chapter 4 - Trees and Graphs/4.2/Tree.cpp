//
// Created by HP 735 G5 on 27-Mar-24.
//

#include "Tree.hpp"

TreeNode* Tree::array_to_BST(std::vector<int> &numbers)
{
    if(numbers.empty()) return nullptr;
    else return Tree::array_to_BTS(numbers, 0, (int)numbers.size() - 1);
}

TreeNode *Tree::array_to_BTS(std::vector<int> &numbers, int start, int end)
{
    if(start > end) return nullptr;
    int middle = start + (end - start) / 2;

    TreeNode* root = new TreeNode(middle);
    root->left = Tree::array_to_BTS(numbers, start, middle - 1);
    root->right = Tree::array_to_BTS(numbers, middle + 1, end);
    return root;
}


void Tree::inorder_traversal(TreeNode *root)
{
    if(root == nullptr) return;
    inorder_traversal(root->left);
    std::cout << root->value << " ";
    inorder_traversal(root->right);
}
