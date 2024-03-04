/*Return Kth to Last: Implement an algorithm to find the kth to last element of a singly linked list. */

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
    std::cout << myList.k_last_element(1) << "\n";
    std::cout << myList.k_last_element(2) << "\n";
    std::cout << myList.k_last_element(3) << "\n";

    return 0;
}