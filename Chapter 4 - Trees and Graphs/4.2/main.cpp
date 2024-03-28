/*
 Minimal Tree: Given a sorted (increasing order) array with unique integer elements, write an
 algorithm to create a binary search tree with minimal height.
*/

#include "Tree.hpp"
#include "algorithm"

int main()
{
    std::vector<int> nums = {5,6,7,4,2,6,8,2};
    std::sort(nums.begin(), nums.end());
    TreeNode* root = Tree::array_to_BST(nums);
    Tree::inorder_traversal(root);
    return 0;
}
