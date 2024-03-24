#ifndef INC_3_3_STACK_HPP
#define INC_3_3_STACK_HPP

#define CAP 5


class Stack {
private:
    int capacity;
    int stack_pointer;
    int* buffer;
public:
    explicit Stack(int c):capacity(c), stack_pointer(0) {this->buffer = new int[capacity];}
    Stack():capacity(CAP), stack_pointer(0) {this->buffer = new int[CAP];}
    ~Stack(){delete[] this->buffer;}

    void push(int data);
    int top();
    void pop();
    bool is_empty() const;
    bool is_full() const;
};


#endif //INC_3_3_STACK_HPP
