#include "myQueue.hpp"

void myQueue::enqueue(int data)
{
    this->inbox.push(data);
}

int myQueue::dequeue()
{
    if(this->is_empty()) return 0;

    while(!inbox.empty())
    {
        outbox.push(inbox.top());
        inbox.pop();
    }

    int ret = outbox.top();
    outbox.pop();
    return ret;
}
