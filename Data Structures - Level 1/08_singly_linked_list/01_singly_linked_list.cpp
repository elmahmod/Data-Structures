#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

int main()
{
    // 'head' is a pointer that will point to the first node
    // in the linked list.
    Node *head = nullptr;

    /*
        These lines do NOT create actual nodes.

        They only create pointers that can point to Node objects.
        Currently, they point to nothing because their value is nullptr.
    */

    Node *node1 = nullptr;
    Node *node2 = nullptr;
    Node *node3 = nullptr;

    /*
        'new Node()' creates an actual Node object in Heap memory.

        The pointer itself is a local variable, while the Node object
        created with 'new' is stored in the Heap.

        Example:

        Pointer                     Heap

        node1
        ┌──────────────┐           ┌───────────────┐
        │   0x1000     │ ────────► │ value         │
        └──────────────┘           │ next          │
                                   └───────────────┘
                                    Address: 0x1000
    */
    node1 = new Node();
    node2 = new Node();
    node3 = new Node();

    // Store a value inside each node.
    node1->value = 1;
    node2->value = 2;
    node3->value = 3;

    // Connect the nodes together.
    node1->next = node2;
    node2->next = node3;

    // The last node does not point to another node.
    node3->next = nullptr;

    // Make 'head' point to the first node in the linked list.
    head = node1;

    /*
        The linked list now looks like this:

        head
         ↓
        [1] → [2] → [3] → nullptr
    */

    // --------------------------------------------------
    // Recommended way to traverse the linked list
    // --------------------------------------------------

    /*
        We use another pointer called 'current'.

        This allows us to move through the linked list
        without changing the original 'head' pointer.
    */
    Node *current = head;

    while (current != nullptr)
    {
        cout << current->value << endl;

        // Move to the next node.
        current = current->next;
    }

    /*
        After the loop:

        head
         ↓
        [1] → [2] → [3] → nullptr


        current
           ↓
        nullptr

        'head' still points to the first node.
    */

    // --------------------------------------------------
    // Traversing by moving 'head'
    // --------------------------------------------------

    /*
        This also works, but it changes 'head'.

        After this loop finishes, head will become nullptr,
        so we lose the pointer to the beginning of the list.

        That is why using a separate pointer such as 'current'
        is usually better.
    */

    while (head != nullptr)
    {
        cout << head->value << endl;

        head = head->next;
    }

    /*
        After the loop:

        head
         ↓
      nullptr
    */

    // --------------------------------------------------
    // Free dynamically allocated memory
    // --------------------------------------------------

    /*
        The nodes were created using 'new', so they remain
        in Heap memory until we explicitly delete them.

        We use 'delete' to release that memory and prevent
        memory leaks.
    */
    delete node1;
    delete node2;
    delete node3;

    return 0;
}