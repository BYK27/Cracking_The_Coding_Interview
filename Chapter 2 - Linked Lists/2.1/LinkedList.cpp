
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

void LinkedList::remove_duplicates()
{
    if(this->head == nullptr || this->head->next == nullptr) return;
    std::unordered_set<int> seen;
    Node* iterator = this->head;
    Node* previous = this->head;

    while(iterator != nullptr)
    {
        if(seen.find(iterator->data) != seen.end())
        {
            previous->next = iterator->next;
            delete iterator;
            iterator = previous->next;
        }
        else
        {
            seen.insert(iterator->data);
            previous = iterator;
            iterator = iterator->next;
        }

    }
}

void LinkedList::remove_duplicates_no_structure()
{
    if(this->head == nullptr || this->head->next == nullptr) return;
    Node* slow = this->head;
    Node* fast;

    while(slow != nullptr)
    {
        fast = slow;
        while(fast->next != nullptr)
        {
            if(slow->data == fast->next->data)
            {
                Node* temporary = fast->next;
                fast->next = fast->next->next;
                delete temporary;
            }
            else
            {
                fast = fast->next;
            }

        }
        slow = slow->next;
    }

}