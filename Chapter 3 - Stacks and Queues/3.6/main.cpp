#include "LinkedQueue.hpp"

int main()
{
    LinkedQueue queue;

    Animal* dog1 = new Animal(DOG, "Buddy");
    Animal* dog2 = new Animal(DOG, "Max");
    Animal* cat1 = new Animal(CAT, "Whiskers");

    queue.enqueue(dog1);
    queue.enqueue(cat1);
    queue.enqueue(dog2);

    Animal* anyAnimal = queue.dequeue_any();
    if (anyAnimal != nullptr) {
        std::cout << "Dequeued any animal: " << anyAnimal->name << std::endl;
        delete anyAnimal;
    }

    Animal* dog = queue.dequeue_dog();
    if (dog != nullptr) {
        std::cout << "Dequeued dog: " << dog->name << std::endl;
        delete dog;
    }

    Animal* cat = queue.dequeue_cat();
    if (cat != nullptr) {
        std::cout << "Dequeued cat: " << cat->name << std::endl;
        delete cat;
    }

    return 0;
}
