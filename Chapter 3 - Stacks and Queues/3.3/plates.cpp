
#include "plates.hpp"


void Plates::push(int data)
{
    if(my_stacks[current].is_full()) ++current;
    my_stacks[current].push(data);
}

void Plates::pop()
{
    my_stacks[current].pop();
    if(my_stacks[current].is_empty()) --current;
}

int Plates::top()
{
    return my_stacks[current].top();
}

Plates::~Plates()
{
    delete[] my_stacks;
}

void Plates::pop_at(int place)
{
    while(current >= 0 && my_stacks[place].is_empty()) --current;
    if(my_stacks[current].is_empty()) return;
    my_stacks[place].pop();
}
