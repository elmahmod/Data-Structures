# ⏱️ Time & Space Complexity — Big O Notation — Part 1

When we write a program, we usually care about two important things:

**⏱️ Time Complexity** → How the amount of work grows as the input gets bigger.
**💾 Space Complexity** → How much extra memory the algorithm needs as the input gets bigger.

---

## 1️⃣ What is Time Complexity? ⏱️

**Time Complexity** describes how the number of operations changes when the amount of data increases.

Imagine we have an array:

```text
[10, 20, 30, 40, 50]
```

If we want to find `50`, an algorithm might check:

```text
10 ❌
20 ❌
30 ❌
40 ❌
50 ✅
```

For 5 items, it may perform about **5 checks**.

If we have:

```text
1,000 items
```

it may need about **1,000 checks**.

So as the input becomes larger 📈, the work also becomes larger.

We normally use:

```text
n = number of items
```

---

## 2️⃣ What is Space Complexity? 💾

**Space Complexity** describes how much **extra memory** an algorithm needs.

For example, suppose we already have:

```text
[10, 20, 30, 40]
```

If our algorithm creates another array:

```text
[10, 20, 30, 40]
```

it needs extra memory 💾.

So when analyzing an algorithm, we can ask:

> ⏱️ How much work does it require?

and

> 💾 How much extra memory does it require?

---

# 📈 What is Big O Notation?

**Big O Notation** is a way to describe how an algorithm's resource usage **grows when the input size `n` grows**.

Instead of saying:

> "This program takes exactly 0.002 seconds."

we describe its growth:

```text
O(1)
O(log n)
O(n)
O(n log n)
O(n²)
O(2ⁿ)
```

Why? 🤔 Because the exact running time can change depending on the computer 💻, but the **growth pattern of the algorithm** is more useful when comparing algorithms.

---

## 🟢 O(1) — Constant Time

The amount of work stays approximately the **same**, no matter how much data we have.

Example:

```python
numbers = [10, 20, 30, 40]

print(numbers[0])
```

We directly access the first element.

```text
10 items       → 1 operation
1,000 items    → 1 operation
1,000,000 items → 1 operation
```

So:

**O(1) = Constant Time ⚡**

---

## 🟡 O(n) — Linear Time

The amount of work grows with the number of elements.

Example:

```python
for number in numbers:
    print(number)
```

If there are:

```text
10 elements      → about 10 operations
100 elements     → about 100 operations
1,000 elements   → about 1,000 operations
```

So:

**O(n) = Linear Time ➡️**

---

## 🟠 O(n²) — Quadratic Time

This often happens when we have a **loop inside another loop**.

```python
for i in numbers:
    for j in numbers:
        print(i, j)
```

If:

```text
n = 10
```

approximately:

```text
10 × 10 = 100 operations
```

If:

```text
n = 100
```

approximately:

```text
100 × 100 = 10,000 operations
```

So:

**O(n²) = Quadratic Time 🐢**

---

## 📊 See How Big O Grows

genui{"learning_viz":{"type_id":"BIG_O_TIME_COMPLEXITY"}}

Notice how algorithms such as **O(1)** grow very slowly, while **O(n²)** and **O(2ⁿ)** can grow extremely quickly as `n` becomes larger.

---

## 🧠 Simple Comparison

| Big O             | Meaning      | Example                      |
| ----------------- | ------------ | ---------------------------- |
| **O(1)** ⚡        | Constant     | Access one array element     |
| **O(log n)** 🔍   | Logarithmic  | Binary Search                |
| **O(n)** ➡️       | Linear       | One loop                     |
| **O(n log n)** 📈 | Linearithmic | Efficient sorting algorithms |
| **O(n²)** 🐢      | Quadratic    | Two nested loops             |
| **O(2ⁿ)** 🚨      | Exponential  | Some recursive algorithms    |

### ⭐ Most important idea

If:

```text
n = amount of data
```

then Big O tells us:

> **What happens to the amount of work when `n` becomes very large?**

For example:

```text
O(1)   → stays almost the same ⚡
O(n)   → grows with n ➡️
O(n²)  → grows much faster 📈
```

So when studying **Data Structures & Algorithms**, Big O helps us compare algorithms and understand how well they **scale with larger inputs**.
