Let’s forget about the **Linked List** for a moment and use a **house address** example 🏠, because this is the main idea.

Imagine that `head` is a piece of paper containing the address of a house:

```text
main:

head
┌────────┐
│ 0x1000 │
└────────┘
     ↓
   🏠 Node
   value = 20
   next  = 0x2000
```

When you pass `head` like this:

```cpp
printList(head);
```

And the function receives it like this:

```cpp
void printList(Node* head)
```

C++ creates a **copy of the pointer**:

```text
main head             function head
┌────────┐            ┌────────┐
│ 0x1000 │            │ 0x1000 │
└────────┘            └────────┘
     \                    /
      \                  /
       ↓                ↓
          Same Node
             🏠
```

So now we have **two different pointer variables**, but both contain the same address.

Now inside `printList`, you do:

```cpp
head = head->next;
```

This means:

> Change the address stored inside the function’s copy of `head`.

For example:

```text
main head             function head
┌────────┐            ┌────────┐
│ 0x1000 │            │ 0x2000 │
└────────┘            └────────┘
```

Did we change the `head` inside `main`?

No ❌

We only changed the copy inside the function.

That is why:

```cpp
head = head->next;
```

does not change the original `head` in `main`.

---

Now look at:

```cpp
void insertAfter(Node* prevNode, int value)
```

Here, `prevNode` is also a **copy of the pointer**.

For example:

```text
main pointer          prevNode
┌────────┐            ┌────────┐
│ 0x1000 │            │ 0x1000 │
└────────┘            └────────┘
      \                  /
       ↓                ↓
          Same Node
```

But you are not doing this:

```cpp
prevNode = something;
```

Instead, you are doing:

```cpp
prevNode->next = newNode;
```

And this is very different.

The `->` operator roughly means:

> Go to the object stored at the address inside `prevNode`, then modify something inside that object.

So we go to the actual Node:

```text
0x1000

┌─────────────────┐
│ value = 20      │
│ next  = 0x2000  │
└─────────────────┘
```

Then we do:

```cpp
prevNode->next = newNode;
```

So the Node becomes:

```text
0x1000

┌─────────────────┐
│ value = 20      │
│ next  = 0x3000  │  ← Changed
└─────────────────┘
```

This is the same Node that `main` points to, so `main` can see the change ✅

### The important difference

```cpp
head = head->next;
```

means:

> Change the **pointer itself**.

But:

```cpp
head->next = something;
```

means:

> Change something **inside the Node** that the pointer points to.

So remember:

```text
ptr = ...          → Changes the pointer copy

ptr->value = ...   → Changes the actual Node
ptr->next  = ...   → Changes the actual Node
```