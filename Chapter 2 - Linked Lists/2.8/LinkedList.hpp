#ifndef INC_2_1_LINKEDLIST_HPP
#define INC_2_1_LINKEDLIST_HPP

#include "Node.hpp"
#include <unordered_set>
#include <stack>

class LinkedList
{
public:
    Node* head;
    Node* tail;
public:
    LinkedList():head(nullptr), tail(nullptr){}
    ~LinkedList();
    void insert(int value);
    void print();

    //Problem specific methods
    bool is_circular();
};


#endif //INC_2_1_LINKEDLIST_HPP
