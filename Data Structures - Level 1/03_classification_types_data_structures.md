## 🌳 Classifications / Types of Data Structures

Here is the picture written clearly:

```text
                         Data Structure
                        /              \
                Primitive            Non-Primitive
               /   |   |   \          /          \
          Integer Float Char Pointer Linear     Non-Linear
                                     /    \       /     \
                                  Static Dynamic Tree   Graph
                                    |      |
                                  Array   Queue
                                          Stack
                                          Linked List
```

### 1️⃣ Primitive Data Structures

**Primitive** means the basic types of data that a programming language gives us directly.

* 🔢 **Integer** → whole numbers
  Example: `10`, `25`, `-7`

* 🔢 **Float** → decimal numbers
  Example: `3.14`, `8.5`

* 🔤 **Char** → one character
  Example: `'A'`, `'B'`, `'7'`

* 👉 **Pointer** → stores the memory address of another value.

Example:

```c
int age = 20;
```

Here, `age` is an **Integer**.

---

## 2️⃣ Non-Primitive Data Structures

These are more complex structures made using primitive data types.

They are divided into:

### ➡️ A. Linear Data Structures

**Linear** means the elements are arranged one after another.

Think of people standing in a line:

```text
👤 → 👤 → 👤 → 👤
```

According to your picture, Linear is divided into:

### 📦 Static

The picture gives:

**Array**

Example:

```text
[10, 20, 30, 40]
```

An Array keeps multiple values together.

```text
Index:  0   1   2   3
       [10][20][30][40]
```

---

### 🔄 Dynamic

The picture gives three examples:

**Queue 🚶‍♂️🚶‍♀️🚶‍♂️**

Works like people waiting in a line.

```text
First → A → B → C → Last
```

The first person who enters is usually the first person who leaves.

**Stack 🥞**

Works like plates:

```text
   🍽️ ← last added
   🍽️
   🍽️
```

The last item added is the first one removed.

**Linked List 🔗**

Items are connected to each other:

```text
A → B → C → D
```

Each item knows where the next item is.

---

### 🌳 B. Non-Linear Data Structures

**Non-Linear** means the elements don't have to follow one straight line.

The picture gives:

### 🌳 Tree

Data is organized like a tree:

```text
        A
       / \
      B   C
     / \
    D   E
```

A common example is folders on your computer 📁:

```text
📁 Computer
   ├── 📁 Pictures
   └── 📁 Documents
```

### 🕸️ Graph

A Graph represents connections between things.

Example:

```text
A ----- B
|       |
|       |
C ----- D
```

Think about a social network 👥:

```text
Ali ↔ Sara
 ↑      ↕
Omar ↔ Lina
```

People can be connected to many other people.

---

## 🧠 Easy way to remember

```text
Data Structures
│
├── 🧱 Primitive
│   ├── Integer
│   ├── Float
│   ├── Char
│   └── Pointer
│
└── 📦 Non-Primitive
    │
    ├── ➡️ Linear
    │   ├── Static
    │   │   └── Array
    │   │
    │   └── Dynamic
    │       ├── Queue
    │       ├── Stack
    │       └── Linked List
    │
    └── 🌳 Non-Linear
        ├── Tree
        └── Graph
```

💡 **Important:** This picture shows a common simplified classification used for learning. Different books may classify things a little differently—for example, arrays can also be created dynamically in some programming languages.

The most important distinction is:

**Linear ➡️** data follows a sequence.
**Non-Linear 🌳** data can branch or have many connections.
