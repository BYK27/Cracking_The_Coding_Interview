
#ifndef INC_3_2_STACK_HPP
#define INC_3_2_STACK_HPP

#include <stack>

class Stack {
private:
    std::stack<int> stack;
    std::stack<int> min_stack;

public:
    Stack();
    void push(int val);
    void pop();
    int top();
    int getMin();
};


#endif //INC_3_2_STACK_HPP
