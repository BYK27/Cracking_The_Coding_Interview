
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

int LinkedList::k_last_element(int k)
{
    Node* slow = this->head;
    Node* fast = this->head;

    //for 0-based index, use k>0
    while(k > 1)
    {
        fast = fast->next;
        --k;
    }

    while(fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow->data;
}