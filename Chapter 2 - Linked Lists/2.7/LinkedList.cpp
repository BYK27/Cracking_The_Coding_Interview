
#include <iostream>

#include "LinkedList.hpp"

void LinkedList::insert(int value)
{
    Node* node = new Node(value);
    if(head == nullptr)
    {
        head = node;
        tail = head;
    }
    else
    {
        tail->next = node;
        tail = tail->next;
    }
}

void LinkedList::print()
{
    Node* iterator = this->head;
    while(iterator->next != nullptr)
    {
        std::cout << iterator->data << " -> ";
        iterator = iterator->next;
    }
    std::cout << iterator->data;
    std::cout << "\n";
}


LinkedList::~LinkedList()
{
    Node* iterator_deleter = this->head;
    Node* iterator_helper;

    while(iterator_deleter != nullptr)
    {
        iterator_helper = iterator_deleter->next;
        delete iterator_deleter;
        iterator_deleter = iterator_helper;
    }
}

Node* LinkedList::does_intersect(Node* headA, Node* headB)
{
    Node* helperA = headA;
    Node* helperB = headB;

    helperA = helperA != nullptr ? helperA->next : headB;
    helperB = helperB != nullptr ? helperB->next : headA;

    return helperA;

}

