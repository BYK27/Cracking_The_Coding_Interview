/*Remove Dups! Write code to remove duplicates from an unsorted linked list. */

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


    myList.print();
    myList.remove_duplicates_no_structure();
    myList.print();

    return 0;
}