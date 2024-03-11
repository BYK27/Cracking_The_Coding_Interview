/* Sum Lists: You have two numbers represented by a linked list, where each node contains a single
digit. The digits are stored in reverse order, such that the 1 's digit is at the head of the list. Write a
function that adds the two numbers and returns the sum as a linked list.  */

#include "LinkedList.cpp"

int main()
{
    LinkedList first_number;
    LinkedList second_number;

    first_number.insert(7);
    first_number.insert(1);
    first_number.insert(6);
    first_number.print();

    second_number.insert(5);
    second_number.insert(9);
    second_number.insert(2);
    second_number.print();

    LinkedList* sum = LinkedList::sum(&first_number, &second_number);
    sum->print();

    return 0;
}