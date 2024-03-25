/*
Sort Stack: Write a program to sort a stack such that the smallest items are on the top. You can use
an additional temporary stack, but you may not copy the elements into any other data structure
(such as an array). The stack supports the following operations: push, pop, peek, and is Empty.
 */

#include <iostream>
#include "stack"

void sort_stack(std::stack<int>& stack_input)
{
    std::stack<int> stack_helper;

    while(!stack_input.empty())
    {
        int data = stack_input.top();
        stack_input.pop();

        while(!stack_helper.empty() && data < stack_helper.top())
        {
            stack_input.push(stack_helper.top());
            stack_helper.pop();
        }
        stack_helper.push(data);
    }

    while (!stack_helper.empty())
    {
        stack_input.push(stack_helper.top());
        stack_helper.pop();
    }
}

void print_stack(std::stack<int> stack_input)
{
    while(!stack_input.empty())
    {
        std::cout << stack_input.top() << " ";
        stack_input.pop();
    }
    std::cout << std::endl;
}

int main()
{
    std::stack<int> stack_input;
    stack_input.push(3);
    stack_input.push(1);
    stack_input.push(5);
    stack_input.push(2);
    stack_input.push(4);

    std::cout << "Before sorting: ";
    print_stack(stack_input);

    sort_stack(stack_input);

    std::cout << "After sorting: ";
    print_stack(stack_input);

    return 0;
}
