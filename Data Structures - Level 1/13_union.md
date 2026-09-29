In C++, a **union** is a special type where different variables **share the same memory location**.

Example:

```cpp
union Data
{
    int number;
    float price;
    char letter;
};
```

You can use it like this:

```cpp
Data d;

d.number = 10;
cout << d.number << endl;
```

But the important point is: all members share the same memory.

So if you do:

```cpp
d.number = 10;
d.price = 5.5;
```

then `d.price` replaces the value stored in the same memory area. You should normally consider only the **last assigned member** valid.

Think of it like one box that can hold different kinds of things:

```text
One memory box

┌─────────────┐
│ int         │
│ OR          │
│ float       │
│ OR          │
│ char        │
└─────────────┘
```

Not all at the same time.

The difference from a `struct` is:

```cpp
struct Person
{
    int age;
    float height;
};
```

A `struct` gives separate memory to every member:

```text
age    → its own memory
height → its own memory
```

But a `union` shares memory:

```text
number
price
letter
   ↓
same memory
```

So the main idea is:

```text
struct → all members can store values at the same time
union  → members share the same memory
```

`union` is useful when you want to save memory and you know you only need one of several possible values at a time.