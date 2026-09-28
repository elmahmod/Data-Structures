A **Doubly Linked List** is a linked list where each node has **two pointers**:

```cpp
prev
next
```

So each node contains:

```text
┌──────────────────────┐
│ prev | value | next  │
└──────────────────────┘
```

Example:

```text
nullptr ← [10] ⇄ [20] ⇄ [30] → nullptr
```

Each node knows:

```text
prev → previous node
next → next node
```

In C++:

```cpp
class Node
{
public:
    int value;
    Node* prev;
    Node* next;
};
```

The difference is:

```text
Singly Linked List:
[10] → [20] → [30]

Doubly Linked List:
[10] ⇄ [20] ⇄ [30]
```

With a Doubly Linked List, you can move:

```text
forward  →
backward ←
```

So for example, if you are at node `20`:

```cpp
current->next
```

takes you to `30`, and:

```cpp
current->prev
```

takes you to `10`.