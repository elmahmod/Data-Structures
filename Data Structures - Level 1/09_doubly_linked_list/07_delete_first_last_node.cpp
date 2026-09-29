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

void deleteFirstNode(Node *&head)
{
    if (head == nullptr)
        return;

    Node *temp = head;
    head = head->next;

    if (head != nullptr)
        head->prev = nullptr;

    delete temp;
}

void deleteLastNode(Node *&head)
{
    if (head == nullptr)
        return;

    Node *lastNode = head;

    if (lastNode->next == nullptr)
    {
        head = nullptr;
        delete lastNode;
        return;
    }

    while (lastNode->next != nullptr)
    {
        lastNode = lastNode->next;
    }

    lastNode->prev->next = nullptr;

    delete lastNode;
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
    insertAtBeginning(head, 3);
    insertAtBeginning(head, 4);
    printList(head);

    cout << "\ndelete first node: \n";
    deleteFirstNode(head);
    printList(head);

    cout << "\ndelete last node: \n";
    deleteLastNode(head);
    printList(head);

    deleteList(head);
    return 0;
}
