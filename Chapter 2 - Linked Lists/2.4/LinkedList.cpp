
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

void LinkedList::partition(int delimiter)
{
    auto* small_list = new LinkedList();
    auto* large_list = new LinkedList();

    Node* iterator = this->head;

    while(iterator != nullptr)
    {
        if(iterator->data < delimiter) small_list->insert(iterator->data);
        else large_list->insert(iterator->data);
        iterator = iterator->next;
    }

    if(small_list->head)
    {
        small_list->tail->next = large_list->head;
        this->head = small_list->head;
    }
    else if(large_list->head) this->head = large_list->head;

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

void LinkedList::link(Node *start, Node *end, Node *iter)
{
    if(start == nullptr)
    {
        start = iter;
        end = start;
    }
    else
    {
        end->next = iter;
        end = iter;
    }
}

