#include <iostream>
#include "Stack.cpp"

/*Stack Min: How would you design a stack which, in addition to push and pop, has a function min
which returns the minimum element? Push, pop and min should all operate in 0(1) time. */

int main()
{
    Stack stack;

    stack.push(3);
    stack.push(2);
    stack.push(5);
    stack.push(1);

    std::cout << "Top element of the stack: " << stack.top() << std::endl;
    std::cout << "Minimum element of the stack: " << stack.getMin() << std::endl;

    stack.pop();

    std::cout << "Top element of the stack after popping: " << stack.top() << std::endl;
    std::cout << "Minimum element of the stack after popping: " << stack.getMin() << std::endl;

    return 0;
}