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
    printList(head);

    deleteList(head);
    return 0;
}
