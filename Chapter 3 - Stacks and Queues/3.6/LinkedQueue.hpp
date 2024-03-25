
#ifndef INC_3_6_LINKEDQUEUE_HPP
#define INC_3_6_LINKEDQUEUE_HPP

#include <list>
#include <string>
#include <iostream>


enum Type {ANIMAL, DOG, CAT};

static int global_id = 0;

struct Animal
        {
            int id;
            Type type;
            std::string name;
            Animal(Type t, std::string n):type(t), name(n)
            {
                id = global_id++;
            }
        };

class LinkedQueue
{
private:
    std::list<Animal*> dog_queue;
    std::list<Animal*> cat_queue;

public:
    void enqueue(Animal*);
    Animal* dequeue_cat();
    Animal* dequeue_dog();
    Animal* dequeue_any();

};


#endif //INC_3_6_LINKEDQUEUE_HPP
