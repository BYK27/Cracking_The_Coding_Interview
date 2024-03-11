
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

LinkedList *LinkedList::sum(LinkedList *first_number, LinkedList *second_number)
{
    Node* first_number_digit = first_number->head;
    Node* second_number_digit = second_number->head;

    auto* ret = new LinkedList();

    bool carry = false;

    while(first_number_digit != nullptr || second_number_digit != nullptr)
    {

        int sum = first_number_digit->data + second_number_digit->data;
        if(carry) {++sum; carry = false;}
        if(sum > 9){sum %= 10; carry = true;}

        ret->insert(sum);

        if(first_number_digit->next == nullptr) first_number_digit = nullptr;
        else first_number_digit = first_number_digit->next;
        if(second_number_digit->next == nullptr) second_number_digit = nullptr;
        else second_number_digit = second_number_digit->next;
    }

    if(carry) ret->insert(1);

    return ret;
}


