**ADT** stands for **Abstract Data Type**.

It describes **what a data structure can do**, without explaining **how it is implemented internally**.

For example, a **Stack** is an ADT. It tells us we can do operations such as:

```text
push()  → add an item
pop()   → remove the top item
top()   → get the top item
```

But it does **not** say whether the Stack is implemented using:

```text
Array
Linked List
Vector
```

Any of them can be used.

### Simple idea

Think of an ADT like a **car** 🚗.

You know:

```text
Steering wheel → turns the car
Brake          → stops the car
Gas pedal      → moves the car
```

You don't need to know exactly how the engine works internally.

Similarly:

```text
ADT = What operations are available
Data Structure = How those operations are implemented
```

For example:

```text
Stack ADT
   ↓
Can be implemented using
   ↓
Array OR Linked List
```

Common ADTs include **Stack, Queue, List, Set, and Map**.