#ifndef INC_4_2_TREE_HPP
#define INC_4_2_TREE_HPP

#include "TreeNode.hpp"
#include "vector"
#include <iostream>

class Tree
{
public:
    static TreeNode* array_to_BST(std::vector<int>& numbers);
    static TreeNode* array_to_BTS(std::vector<int>& numbers, int start, int end);
    static void inorder_traversal(TreeNode* root);
};


#endif //INC_4_2_TREE_HPP
