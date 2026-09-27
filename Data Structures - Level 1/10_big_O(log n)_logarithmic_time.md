# 🔵 Big O(log n): Logarithmic Time Function

**O(log n)** means **Logarithmic Time**.

It happens when the amount of data becomes **much smaller in every step**, often by dividing it by 2.

---

## 🔍 Example from your picture

```cpp
void fun1(short n)
{
    short x = n;

    while (x > 0)
    {
        x = x / 2;
        cout << x << endl;
    }
}
```

The important line is:

```cpp
x = x / 2;
```

Every time the loop runs, `x` becomes **half of its previous value**.

---

## 🧠 Example

Suppose:

```text
n = 16
```

At the beginning:

```text
x = 16
```

Then:

```text
16
 ↓ ÷2
8
 ↓ ÷2
4
 ↓ ÷2
2
 ↓ ÷2
1
 ↓ ÷2
0
```

The value becomes smaller very quickly.

The loop runs only about:

```text
log₂(16) = 4
```

iterations before reaching the end, with a small constant adjustment depending on exactly how we count the final iteration.

---

## 📌 Another Example

If:

```text
n = 1024
```

we keep dividing by 2:

```text
1024
512
256
128
64
32
16
8
4
2
1
0
```

We do **not** need 1024 loop iterations.

We need only about:

```text
log₂(1024) = 10
```

iterations.

That is the main idea behind logarithmic complexity.

---

# 🧮 Calculating the Complexity

From your picture:

```text
Steps outside the loop = 1
Steps inside the loop   = 7
```

The steps inside the loop are repeated approximately:

```text
log n
```

times.

So we can write:

```text
1 + 7 log n
```

In Big O notation, we ignore constants:

```text
1 + 7 log n
      ↓
   O(log n)
```

✅ Therefore:

> **Time Complexity = O(log n)**

---

## ❓ Why `log n`?

Because we are asking:

> **How many times can we divide `n` by 2 until we reach 1?**

For example:

```text
n = 8

8 → 4 → 2 → 1
```

Three divisions:

```text
2³ = 8
```

So:

```text
log₂(8) = 3
```

Another example:

```text
n = 32

32 → 16 → 8 → 4 → 2 → 1
```

Five divisions:

```text
2⁵ = 32
```

Therefore:

```text
log₂(32) = 5
```

---

## 💡 Important Note About the Log Base

Because the code divides by `2`, mathematically we can think of:

```text
log₂(n)
```

But in Big O notation, we normally simply write:

```text
O(log n)
```

The base is usually not written because changing the base only changes the result by a constant factor.

---

## ⭐ Easy Rule to Remember

When you see something like:

```cpp
x = x / 2;
```

or:

```cpp
x = x * 2;
```

inside a loop, it is often a sign of:

> 🔵 **O(log n)**

because the value changes by a **factor** each time rather than by just `+1` or `-1`.

### ✅ Final idea

> **O(log n) means the algorithm reduces the problem significantly in every step.**

In your example:

```cpp
x = x / 2;
```

so the number of loop iterations is approximately:

```text
log₂(n)
```

Therefore:

> ✅ **Time Complexity = O(log n)**