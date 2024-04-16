#include <iostream>
#include "TreeNode.hpp"

int main()
{
    TreeNode* root1 = new TreeNode(4);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(6);
    root1->left->left = new TreeNode(1);
    root1->left->right = new TreeNode(3);
    root1->right->left = new TreeNode(5);
    root1->right->right = new TreeNode(7);
    bool result1 = TreeNode::is_BST(root1);
    std::cout << "Test case 1 is a valid BST: " << std::boolalpha << result1 << std::endl;

    TreeNode* root2 = new TreeNode(4);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(6);
    root2->left->left = new TreeNode(1);
    root2->left->right = new TreeNode(5); // Invalid: left child of 4 is 5, which violates the BST property
    root2->right->left = new TreeNode(5);
    root2->right->right = new TreeNode(7);
    bool result2 = TreeNode::is_BST(root2);
    std::cout << "Test case 2 is a valid BST: " << std::boolalpha << result2 << std::endl;

    return 0;
}
