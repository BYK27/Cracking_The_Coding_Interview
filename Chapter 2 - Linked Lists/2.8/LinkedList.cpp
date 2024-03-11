
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

bool LinkedList::is_circular()
{
    if(this->head == nullptr) return false;

    Node* slow = this->head;
    Node* fast = this->head;

    while(fast->next != nullptr && fast->next->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return true;
    }

    return false;
}

