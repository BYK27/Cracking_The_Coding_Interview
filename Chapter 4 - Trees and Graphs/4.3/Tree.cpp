#include "Tree.hpp"

std::vector<ListNode *> Tree::list_of_depths(TreeNode *root)
{
    std::queue<TreeNode*> queue;
    std::vector<ListNode*> ret;
    if(root == nullptr) return ret;

    queue.push(root);

    while(!queue.empty())
    {
        int _size = (int)queue.size();
        ListNode* head = nullptr;
        ListNode* iterator = nullptr;

        for (int i = 0; i < _size; ++i)
        {
            TreeNode* node = queue.front();
            queue.pop();
            auto* list_node = new ListNode(node->value);

            if(head == nullptr) head = list_node;
            else iterator->next = list_node;

            iterator = list_node;

            if(node->left != nullptr) queue.push(node->left);
            if(node->right != nullptr) queue.push(node->right);
        }
        ret.push_back(head);
    }
    return ret;
}

void Tree::print_list_of_depths(const std::vector<ListNode *>& list)
{
    int _size = (int)list.size();

    for (int i = 0; i < _size; ++i)
    {
        ListNode* current_iteration = list[i];
        std::cout << "Current level: " << i << " : ";
        while (current_iteration != nullptr)
        {
            std::cout << current_iteration->value << " ";
            current_iteration = current_iteration->next;
        }
        std::cout << std::endl;
    }
}

TreeNode *Tree::array_to_tree(std::vector<int> &numbers)
{
    if(numbers.empty()) return nullptr;

    std::queue<TreeNode*> queue;
    size_t _size = numbers.size();
    size_t iter = 1;

    auto* root = new TreeNode(numbers[0]);
    queue.push(root);


    while(!queue.empty() && iter < _size)
    {
        TreeNode* current = queue.front();
        queue.pop();

        if(iter < _size && numbers[iter] != -1)
        {
            current->left = new TreeNode(numbers[iter]);
            queue.push(current->left);
        }
        ++iter;
        if(iter < _size && numbers[iter] != -1)
        {
            current->right = new TreeNode(numbers[iter]);
            queue.push(current->right);
        }
        ++iter;
    }
    return root;
}
