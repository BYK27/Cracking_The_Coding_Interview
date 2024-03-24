#ifndef INC_3_3_PLATES_HPP
#define INC_3_3_PLATES_HPP
#include "stack.hpp"
#include <vector>


class Plates {
private:

    int capacity;
    int current;
    Stack* my_stacks;
public:
    explicit Plates(int c): capacity(c), current(0){my_stacks = new Stack[c];}
    ~Plates();
    void push(int data);
    int top();
    void pop();
    void pop_at(int plates);
};


#endif //INC_3_3_PLATES_HPP
