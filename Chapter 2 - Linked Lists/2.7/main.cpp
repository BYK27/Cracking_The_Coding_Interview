/*I ntersection: Given two (singly) linked lists, determine if the two lists intersect. Return the
 * intersecting node. Note that the intersection is defined based on reference, not value. That is, if the kth
node of the first linked list is the exact same node (by reference) as the jth node of the second
linked list, then they are intersecting.  */

#include "LinkedList.cpp"

int main()
{
    LinkedList list;

    // Creating linked list A: 1 -> 2 -> 3 -> 4 -> 5
    Node* headA = new Node(1);
    headA->next = new Node(2);
    headA->next->next = new Node(3);
    headA->next->next->next = new Node(4);
    headA->next->next->next->next = new Node(5);

    // Creating linked list B: 6 -> 7 -> 8 -> 9
    Node* headB = new Node(6);
    headB->next = new Node(7);
    headB->next->next = new Node(8);
    headB->next->next->next = new Node(9);

    // Linking lists A and B at Node 3 of list A
    headB->next->next->next->next = headA->next->next;

    // Testing intersection
    Node* intersectionNode = list.does_intersect(headA, headB);

    if (intersectionNode != nullptr)
        std::cout << "The linked lists intersect at node with value: " << intersectionNode->data << std::endl;
    else
        std::cout << "The linked lists do not intersect." << std::endl;


    return 0;
}