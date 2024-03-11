/*Three in One: Describe how you could use a single array to implement three stacks. */


#include "Stack.cpp"
int main()
{
    // Creating an instance of the Stack class
    Stack stack;

    // Pushing elements onto the stacks
    stack.push(1, 0); // Pushing 1 onto stack 0
    stack.push(2, 0); // Pushing 2 onto stack 0
    stack.push(3, 1); // Pushing 3 onto stack 1

    // Checking if stacks are empty
    std::cout << "Is stack 0 empty? " << (stack.is_empty(0) ? "Yes" : "No") << std::endl;
    std::cout << "Is stack 1 empty? " << (stack.is_empty(1) ? "Yes" : "No") << std::endl;
    std::cout << "Is stack 2 empty? " << (stack.is_empty(2) ? "Yes" : "No") << std::endl;

    // Popping elements from the stacks
    stack.pop(0); // Pop from stack 0
    stack.pop(1); // Pop from stack 1

    // Getting the top element of the stacks
    std::cout << "Top element of stack 0: " << stack.top(0) << std::endl;
    std::cout << "Top element of stack 1: " << stack.top(1) << std::endl;
    return 0;
}