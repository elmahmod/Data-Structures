# 📚 Stack Data Structure

## 🧠 What is a Stack?

A **Stack** is a data structure that follows:

> **LIFO = Last In, First Out**

That means:

👉 The **last item you add** is the **first item you remove**.

Think about a stack of plates 🍽️:

```text
Top
30   ← removed first
20
10   ← added first
Bottom
```

---

## ➕ Push

`push` means:

> Add a new element to the **top** of the stack.

Example:

```text
Push 10
Push 20
Push 30
```

Stack becomes:

```text
Top
30
20
10
Bottom
```

So:

```cpp
stack.push(10);
stack.push(20);
stack.push(30);
```

---

## ➖ Pop

`pop` means:

> Remove the element from the **top**.

Before:

```text
30  ← Top
20
10
```

After `pop()`:

```text
20  ← Top
10
```

`30` was removed because it was the **last item added**.

---

## 👀 Top

`top()` gives us the last element without removing it.

```cpp
cout << stack.top();
```

If the stack is:

```text
30
20
10
```

then:

```text
stack.top() → 30
```

---

# ⚡ Time Complexity

The important Stack operations are usually:

```text
Push → O(1) ⚡
Pop  → O(1) ⚡
Top  → O(1) ⚡
```

---

# 🎯 Main Idea

```text
Push → Add to the top
Pop  → Remove from the top
Top  → Read the top element

LIFO → Last In, First Out
```

Example:

```text
Push: 10
Push: 20
Push: 30

Stack:
30  ← Last In
20
10

Pop → removes 30 first
```

---

# 📦 What About `vector` and `stack`?

This part is important:

❌ A **vector is not built on top of a stack**.

A `vector` is basically a **dynamic array**.

```cpp
vector<int> numbers;
```

It stores elements like:

```text
10  20  30  40
```

You can access any position:

```cpp
numbers[0];
numbers[2];
```

---

## 🔗 But a Vector Can Be Used to Build a Stack

We can make a stack using a vector because a vector already gives us operations like:

```cpp
push_back();
pop_back();
back();
```

For example:

```cpp
vector<int> stack;

stack.push_back(10);
stack.push_back(20);
stack.push_back(30);
```

Now:

```text
30 ← Top
20
10
```

To remove the top:

```cpp
stack.pop_back();
```

To read the top:

```cpp
stack.back();
```

So the relationship is:

```text
📦 Vector
   ↓ can be used to implement
📚 Stack
```

## 💡 In C++

C++ also has a ready-made Stack:

```cpp
#include <stack>

stack<int> numbers;
```

Then we use:

```cpp
numbers.push(10);  // ➕ Add
numbers.pop();     // ➖ Remove
numbers.top();     // 👀 Read top
```

### ⭐ Remember

> **Vector = Dynamic Array 📦**  
> **Stack = LIFO behavior 📚**

A **vector can be used internally to create a stack**, but a vector itself is **not a stack**.