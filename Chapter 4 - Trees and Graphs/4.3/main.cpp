/*
List of Depths: Given a binary tree, design an algorithm which creates a linked list of all the nodes
at each depth (e.g., if you have a tree with depth D, you'll have D linked lists).
*/

#include "Tree.hpp"

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5, -1, 7};

    TreeNode* root = Tree::array_to_tree(nums);

    // Create a linked list of nodes at each depth
    std::vector<ListNode*> lists = Tree::list_of_depths(root);

    // Print the linked lists
    Tree::print_list_of_depths(lists);


    return 0;
}
