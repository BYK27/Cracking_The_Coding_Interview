/*
Queue via Stacks: Implement a MyQueue class which implements a queue using two stacks.
*/

#include <iostream>
#include "myQueue.hpp"

int main()
{
    myQueue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    std::cout << "Dequeuing elements from the queue:" << std::endl;
    std::cout << q.dequeue() << std::endl; // Expect 1
    std::cout << q.dequeue() << std::endl; // Expect 2
    std::cout << q.dequeue() << std::endl; // Expect 3

    std::cout << "Dequeuing from an empty queue:" << std::endl;
    std::cout << q.dequeue() << std::endl; // Expect 0

    return 0;
}
