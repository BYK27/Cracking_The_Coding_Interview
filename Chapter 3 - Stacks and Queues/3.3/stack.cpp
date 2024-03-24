
#include "stack.hpp"

void Stack::push(int data)
{
    if(stack_pointer < capacity)
    {
        buffer[stack_pointer++] = data;
    }
}

int Stack::top()
{
    return stack_pointer > 0 ? buffer[stack_pointer - 1] : 0;
}

void Stack::pop()
{
    --stack_pointer;
}

bool Stack::is_empty() const {return stack_pointer == 0;}
bool Stack::is_full() const {return stack_pointer == capacity;}