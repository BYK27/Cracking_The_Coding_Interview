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
    void remove_duplicates();
    void remove_duplicates_no_structure();
};


#endif //INC_2_1_LINKEDLIST_HPP
