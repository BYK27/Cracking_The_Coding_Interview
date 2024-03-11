/* Partition: Write code to partition a linked list around a value x, such that all nodes less than x come
before all nodes greater than or equal to x. If xis contained within the list, the values of x only need
to be after the elements less than x (see below). The partition element x can appear anywhere in the
"right partition"; it does not need to appear between the left and right partitions. */

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
    myList.partition(7);
    myList.print();

    return 0;
}