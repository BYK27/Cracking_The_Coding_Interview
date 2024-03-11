

#include "Stack.hpp"


void Stack::push(int data, int stack_no)
{
    if(this->stack_pointer[stack_no] >= (stack_no + 1) * (STACK_SIZE - 1))
    {
        std::cout << "Stack full !" << std::endl;
    }
    this->stack[this->stack_pointer[stack_no]++] = data;
}

void Stack::pop(int stack_no)
{
    --this->stack_pointer[stack_no];
}

Stack::Stack() {
    for(int i = 0 ; i < 3 ; ++i) this->stack_pointer[i] = STACK_SIZE * i;
}

int Stack::top(int stack_no)
{
    return this->stack[stack_no];
}

bool Stack::is_empty(int stack_no) {
    return stack_pointer[stack_no] == STACK_SIZE * stack_no;
}
