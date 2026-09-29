#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *prev;
    Node *next;
};

void insertAtBeginning(Node *&head, int value)
{
    Node *newNode = new Node();

    newNode->value = value;
    newNode->next = head;
    newNode->prev = nullptr;

    if (head != nullptr)
    {
        head->prev = newNode;
    }

    head = newNode;
}

void deleteNode(Node *&head, int value)
{
    if (head == nullptr)
        return;

    Node *nodeToDelete = head;

    // Find the node
    while (nodeToDelete != nullptr && nodeToDelete->value != value)
    {
        nodeToDelete = nodeToDelete->next;
    }

    // Value not found
    if (nodeToDelete == nullptr)
        return;

    // If it is the first node
    if (nodeToDelete == head)
        head = nodeToDelete->next;

    // Connect previous node to next node
    if (nodeToDelete->prev != nullptr)
        nodeToDelete->prev->next = nodeToDelete->next;

    // Connect next node to previous node
    if (nodeToDelete->next != nullptr)
        nodeToDelete->next->prev = nodeToDelete->prev;

    delete nodeToDelete;
}

void deleteNode(Node *&head, Node *nodeToDelete)
{
    if (head == nullptr || nodeToDelete == nullptr)
        return;

    if (head == nodeToDelete)
    {
        head = nodeToDelete->next;
    }

    if (nodeToDelete->prev != nullptr)
    {
        nodeToDelete->prev->next = nodeToDelete->next;
    }

    if (nodeToDelete->next != nullptr)
    {
        nodeToDelete->next->prev = nodeToDelete->prev;
    }

    delete nodeToDelete;
}

Node *findNode(Node *head, int value)
{
    while (head != nullptr)
    {
        if (head->value == value)
            return head;

        head = head->next;
    }

    return nullptr;
}

void printList(Node *head)
{
    if (head == nullptr)
        return;
        
    Node *currentNode = head;

    while (currentNode != nullptr)
    {
        cout << currentNode->value << " ";
        currentNode = currentNode->next;
    }
    cout << endl;
}

void deleteList(Node *&head)
{
    while (head != nullptr)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    Node *head = nullptr;

    insertAtBeginning(head, 1);
    insertAtBeginning(head, 2);
    printList(head);

    cout << "\ndelete by value: \n";
    deleteNode(head, 1);
    printList(head);

    cout << "\ndelete by node: \n";
    deleteNode(head, findNode(head, 2));
    printList(head);

    deleteList(head);
    return 0;
}
