#ifndef INC_3_4_MYQUEUE_HPP
#define INC_3_4_MYQUEUE_HPP

#include <stack>

class myQueue {
private:
    std::stack<int> inbox;
    std::stack<int> outbox;

public:
    void enqueue(int data);
    int dequeue();
    inline bool is_empty() const {return inbox.empty() && outbox.empty();}
};


#endif //INC_3_4_MYQUEUE_HPP
