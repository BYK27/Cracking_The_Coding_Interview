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
    ~LinkedList();
    void insert(int value);
    void print();
    inline Node* get_head() { return this->head; }

    //Problem specific methods
    void partition(int delimiter);
    void link(Node* start, Node* end, Node* iter);
};


#endif //INC_2_1_LINKEDLIST_HPP
