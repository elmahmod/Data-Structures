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
    Node* newNode = new Node();

    newNode->value = value;
    newNode->next = head;
    newNode->prev = nullptr;

    if (head != nullptr)
    {
        head->prev = newNode;
    }

    head = newNode;
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


    deleteList(head);
    return 0;
}
