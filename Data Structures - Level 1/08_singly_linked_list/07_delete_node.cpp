#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

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

void insertAtEnd(Node *&head, int value)
{
    Node *newNode = new Node();

    newNode->value = value;

    if (head == nullptr)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *lastNode = head;
    while (lastNode->next != nullptr)
    {
        lastNode = lastNode->next;
    }

    lastNode->next = newNode;
    newNode->next = nullptr;
}

void deleteNode(Node *&head, int value)
{
    Node *currentNode = head, *prevNode = nullptr;

    if (head == nullptr)
        return;

    if (currentNode->value == value)
    {
        head = head->next;
        delete currentNode;
        return;
    }

    while (currentNode != nullptr)
    {
        if (currentNode->value == value)
            break;

        prevNode = currentNode;
        currentNode = currentNode->next;
    }

    if (currentNode == nullptr)
        return;

    prevNode->next = currentNode->next;
    delete currentNode;
}

void deleteFirstNode(Node *&head)
{
    if (head == nullptr)
        return;

    Node *temp = head;
    head = head->next;

    delete temp;
}

void deleteLastNode(Node *&head)
{
    Node *lastNode = head;
    Node *prevNode = nullptr;

    if (head == nullptr)
        return;

    if (lastNode->next == nullptr)
    {
        head = nullptr;
        delete lastNode;
        return;
    }

    while (lastNode->next != nullptr)
    {
        prevNode = lastNode;
        lastNode = lastNode->next;
    }

    prevNode->next = nullptr;
    delete lastNode;
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

    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    printList(head);

    deleteFirstNode(head);
    printList(head);

    deleteNode(head, 3);
    printList(head);

    deleteLastNode(head);
    printList(head);

    deleteList(head);   
    return 0;
}
