# 📦 Array Data Structure

## 🧠 What is an Array?

An **array** is a variable that stores **multiple values of the same type (Homogeneous)**.

Example:

```cpp
int x[5] = {22, 18, 2, 55, 520};
```

Here, the array contains **5 integers**.

---

## 🔢 Indexes

Array indexes always start from **0**:

```text
Value:  22   18    2   55   520
Index:   0    1    2    3     4
```

So:

```cpp
x[0] // 22
x[2] // 2
x[4] // 520
```

---

## 💾 How is an Array Stored in Memory?

Array elements are stored **next to each other in memory**.

For example, if an `int` uses 4 bytes:

```text
Value:    22     18      2     55     520
Address: 1000   1004   1008   1012   1016
```

This is called **contiguous memory**.

---

## ⚡ Random Access

Arrays allow us to access any element directly using its index:

```cpp
x[3]
```

The computer does **not** need to check:

```text
x[0] → x[1] → x[2] → x[3]
```

It can go directly to `x[3]`.

✅ Time Complexity:

```text
O(1)
```

---

# 🔄 Common Array Operations

### 🔍 Searching

If we search one element at a time:

```text
22 → 18 → 2 → 55 → ...
```

Time Complexity:

```text
O(n)
```

### 👀 Access

```cpp
cout << x[2];
```

Time Complexity:

```text
O(1)
```

### ✏️ Updating

```cpp
x[2] = 10;
```

This changes:

```text
Before: {22, 18, 2, 55, 520}
After:  {22, 18, 10, 55, 520}
```

Time Complexity:

```text
O(1)
```

### 🔁 Traversing the Whole Array

```cpp
for (int i = 0; i < 5; i++)
{
    cout << x[i] << endl;
}
```

We visit every element.

Time Complexity:

```text
O(n)
```

---

## 🎯 Remember

> 📦 **Array = many values of the same type stored next to each other in memory.**

```text
Access one element  → O(1) ⚡
Update one element  → O(1) ⚡
Search              → O(n)
Visit all elements  → O(n)
```