#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *prev;
    Node *next;
};

int main()
{
    Node *Node1 = new Node();
    Node *Node2 = new Node();
    Node *Node3 = new Node();

    Node1->value = 1;
    Node2->value = 2;
    Node3->value = 3;

    Node1->next = Node2;
    Node1->prev = nullptr;

    Node2->next = Node3;
    Node2->prev = Node1;

    Node3->next = nullptr;
    Node3->prev = Node2;

    Node *head = Node1;

    Node *currentNode = head;
    while (currentNode != nullptr)
    {
        cout << currentNode->value << " ";
        currentNode = currentNode->next;
    }

    delete Node1;
    delete Node2;
    delete Node3;

    return 0;
}
