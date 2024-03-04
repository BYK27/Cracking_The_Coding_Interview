#ifndef INC_2_1_LINKEDLIST_HPP
#define INC_2_1_LINKEDLIST_HPP

#include "Node.hpp"
#include <unordered_set>

class LinkedList
{
private:
    Node* head;
    Node* tail;
public:
    LinkedList():head(nullptr), tail(nullptr){}
    void insert(int value);
    void print();

    //Problem specific methods
    int k_last_element(int k);
};


#endif //INC_2_1_LINKEDLIST_HPP
