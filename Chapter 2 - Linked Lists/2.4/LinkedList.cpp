
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

void LinkedList::remove_middle_node()
{

    if(head == nullptr || head->next == nullptr) return;

    Node* slow = head;
    Node* fast = head;
    Node* previous = head;

    while(fast != nullptr && fast->next != nullptr)
    {
        previous = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    previous->next = slow->next;
    delete slow;
}