#ifndef INC_4_3_LISTNODE_HPP
#define INC_4_3_LISTNODE_HPP


class ListNode
{
public:
    int value;
    ListNode* next;
    explicit ListNode(int v):value(v), next(nullptr){}
};


#endif //INC_4_3_LISTNODE_HPP
