/* Delete Middle Node: Implement an algorithm to delete a node in the middle (i.e., any node but
the first and last node, not necessarily the exact middle) of a singly linked list, given only access to
that node. */

#include "LinkedList.cpp"

int main()
{
    LinkedList myList;

    myList.insert(3);
    myList.insert(5);
    myList.insert(3);
    myList.insert(7);
    myList.insert(5);
    myList.insert(7);
    myList.insert(8);
    myList.insert(8);


    myList.print();
    myList.remove_middle_node();
    myList.print();

    return 0;
}