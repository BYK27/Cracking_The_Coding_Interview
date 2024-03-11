#ifndef INC_2_1_LINKEDLIST_HPP
#define INC_2_1_LINKEDLIST_HPP

#include "Node.hpp"
#include <unordered_set>
#include <stack>

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
    static Node* does_intersect(Node* headA, Node* headB);
};


#endif //INC_2_1_LINKEDLIST_HPP
