#include "LinkedQueue.hpp"

void LinkedQueue::enqueue(Animal *a)
{
    switch (a->type)
    {
        case DOG:
            this->dog_queue.push_back(a);
            break;
        case CAT:
            this->cat_queue.push_back(a);
            break;
        default:
            std::cout << "Animal unsupported" << std::endl;
            break;
    }
}

Animal *LinkedQueue::dequeue_cat()
{
    if(this->cat_queue.empty()) return nullptr;
    Animal* ret = cat_queue.front();
    cat_queue.pop_front();
    return ret;
}

Animal *LinkedQueue::dequeue_dog()
{
    if(this->dog_queue.empty()) return nullptr;
    Animal* ret = dog_queue.front();
    dog_queue.pop_front();
    return ret;
}

Animal *LinkedQueue::dequeue_any()
{
    if(cat_queue.empty()) return dequeue_dog();
    if(dog_queue.empty()) return dequeue_cat();

    if(cat_queue.front()->id > dog_queue.front()->id) return dequeue_dog();
    else return dequeue_cat();
}
