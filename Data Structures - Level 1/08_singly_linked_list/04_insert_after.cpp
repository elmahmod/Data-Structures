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
        cout << currentNode->value << " ";
        currentNode = currentNode->next;
    }
    cout << endl;
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
    if (prevNode == nullptr)
        return;

    Node *newNode = new Node();

    newNode->value = value;
    newNode->next = prevNode->next;

    prevNode->next = newNode;
}

int main()
{
    Node *head = nullptr;

    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);
    insertAtBeginning(head, 40);

    printList(head);

    Node *node1 = findNode(head, 30);

    insertAfter(node1, 25);

    printList(head);

    return 0;
}
