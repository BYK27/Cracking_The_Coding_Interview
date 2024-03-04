/*Remove Dups! Write code to remove duplicates from an unsorted linked list. */

#include "LinkedList.hpp"

int main()
{
    LinkedList myList;

    myList.insert(3);
    myList.insert(5);
    myList.insert(3);
    myList.insert(7);
    myList.insert(5);
    myList.insert(7);

    myList.print();


    return 0;
}