#ifndef INC_3_1_STACK_HPP
#define INC_3_1_STACK_HPP

#define STACK_SIZE 100

#include <cstdio>
#include <iostream>


class Stack{
    int stack[STACK_SIZE * 3]{};
    int stack_pointer[3]{};

public:
    Stack();
    void push(int data, int stack_no);
    void pop(int stack_no);
    int top(int stack_no);
    bool is_empty(int stack_no);
};


#endif //INC_3_1_STACK_HPP
