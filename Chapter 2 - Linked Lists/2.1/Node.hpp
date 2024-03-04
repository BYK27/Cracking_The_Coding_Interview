#ifndef INC_2_1_NODE_HPP
#define INC_2_1_NODE_HPP

struct Node
{
    int data;
    Node* next;
    explicit Node(int value): data(value), next(nullptr){}
};


#endif //INC_2_1_NODE_HPP
