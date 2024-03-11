/* Palindrome: Implement a function to check if a linked list is a palindrome. */

#include "LinkedList.cpp"

int main()
{
    LinkedList list;

    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(4);
    list.insert(3);
    list.insert(2);
    list.insert(1);

    if(list.is_palindrome()) std::cout << "List is a palindrome";
    else std::cout << "List is a not palindrome";

    return 0;
}