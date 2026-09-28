#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

void insertAtBeginning(Node *&head, int value)
{
    Node *newNode = new Node();

    newNode->value = value;
    newNode->next = head;

    head = newNode;
}

void printList(Node *head)
{
    Node *currentNode = head;

    while (currentNode != nullptr)
    {
        cout << currentNode->value << endl;
        currentNode = currentNode->next;
    }
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

    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);

    printList(head);

    deleteList(head);
    return 0;
}
