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

void insertAfter(Node *prevNode, int value)
{
    Node *newNode = new Node();

    newNode->value = value;
    newNode->next = prevNode->next;
    newNode->prev = prevNode;

    if (prevNode->next != nullptr)
        prevNode->next->prev = newNode;
    prevNode->next = newNode;
}

void printList(Node *head)
{
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
    insertAtBeginning(head, 3);
    printList(head);
    
    Node *node1 = findNode(head, 3);
    insertAfter(node1, 4);
    printList(head);

    deleteList(head);
    return 0;
}
