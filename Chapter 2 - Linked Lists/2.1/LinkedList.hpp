//
// Created by HP 735 G5 on 04-Mar-24.
//

#ifndef INC_2_1_LINKEDLIST_HPP
#define INC_2_1_LINKEDLIST_HPP

#include "Node.hpp"

class LinkedList
{
private:
    Node* head;
    Node* tail;
public:
    LinkedList():head(nullptr), tail(nullptr){}
    void insert(int value);
    void print();

};


#endif //INC_2_1_LINKEDLIST_HPP
