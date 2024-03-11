/* Loop Detection: Given a circular linked list, implement an algorithm that returns the node at the
beginning of the loop.   */

#include "LinkedList.cpp"

int main()
{

    LinkedList list;

    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);

    list.tail->next = list.head->next->next;

    if (list.is_circular())
        std::cout << "The linked list is circular." << std::endl;
    else
        std::cout << "The linked list is not circular." << std::endl;

    return 0;
}