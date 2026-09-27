# 🚗 Queue Data Structure

## 🧠 What is a Queue?

A **Queue** is a data structure that follows:

> **FIFO = First In, First Out**

That means:

👉 The **first item added** is the **first item removed**.

Think about a McDonald's drive-through 🚗🍔:

```text
Exit / Service
      ↑
Car 1   ← arrived first, leaves first
Car 2
Car 3
Car 4   ← arrived last
```

So:

> 🚗 **First car in → First car out**

---

## ➕ Push

In C++, `push()` adds a new element to the **back** of the queue.

```cpp
queue<int> qNumbers;

qNumbers.push(10);
qNumbers.push(20);
qNumbers.push(30);
```

Now:

```text
FRONT              BACK
  ↓                  ↓
10  →  20  →  30
```

`10` entered first.

---

## ➖ Pop

`pop()` removes the element from the **front**.

Before:

```text
FRONT
 ↓
10 → 20 → 30
```

After:

```cpp
qNumbers.pop();
```

we get:

```text
FRONT
 ↓
20 → 30
```

✅ `10` was removed because it entered first.

---

## 👀 Front and Back

### `front()`

Returns the **first element**:

```cpp
qNumbers.front();
```

```text
10 → 20 → 30
↑
front()
```

### `back()`

Returns the **last element**:

```cpp
qNumbers.back();
```

```text
10 → 20 → 30
           ↑
         back()
```

---

# 💻 C++ Example

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> qNumbers;

    qNumbers.push(10);
    qNumbers.push(20);
    qNumbers.push(30);
    qNumbers.push(40);
    qNumbers.push(50);

    cout << "Count = " << qNumbers.size() << endl;

    cout << "Numbers are:\n";

    while (!qNumbers.empty())
    {
        cout << qNumbers.front() << "\n";

        qNumbers.pop();
    }

    return 0;
}
```

### 🖥️ Output

```text
10
20
30
40
50
```

Notice that this is different from a **Stack**.

---

# 📚 Stack vs 🚗 Queue

```text
STACK
LIFO = Last In, First Out

Push: 10, 20, 30

30 ← removed first
20
10
```

```text
QUEUE
FIFO = First In, First Out

10 → 20 → 30
↑
removed first
```

| Operation | 📚 Stack | 🚗 Queue |
|---|---|---|
| Add | `push()` | `push()` |
| Remove | `pop()` | `pop()` |
| Read next | `top()` | `front()` |
| Order | **LIFO** | **FIFO** |
| First removed | Last added | First added |

## ⚡ Time Complexity

Normally:

```text
push()   → O(1) ⚡
pop()    → O(1) ⚡
front()  → O(1) ⚡
back()   → O(1) ⚡
```

### 🎯 Easy Way to Remember

> 📚 **Stack = stack of plates**  
> The last plate you put on top comes off first.

> 🚗 **Queue = line of cars/people**  
> The first one in line is served first.