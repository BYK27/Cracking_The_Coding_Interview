#ifndef INC_4_3_TREE_HPP
#define INC_4_3_TREE_HPP

#include "TreeNode.hpp"
#include "ListNode.hpp"
#include "vector"
#include "queue"
#include <iostream>

class Tree
{
public:
    static std::vector<ListNode*> list_of_depths(TreeNode* root);
    static void print_list_of_depths(const std::vector<ListNode*>& list);
    static TreeNode* array_to_tree(std::vector<int>& numbers);
};


#endif //INC_4_3_TREE_HPP
