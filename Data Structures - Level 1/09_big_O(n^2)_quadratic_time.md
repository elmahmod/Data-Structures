# 🟥 Big O(n²): Quadratic Time Function

**O(n²)** means **Quadratic Time**.

This means:

> 📈 When the input size `n` increases, the number of operations grows roughly like **n × n**.

So if `n` becomes bigger, the work increases **very quickly**.

---

## 🔍 Example from your picture

```cpp
int MultiplicationSum(short n)
{
    int Sum = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            Sum = Sum + (i * j);
        }
    }

    return Sum;
}
```

---

## 🧠 What does this function do?

It uses:

- one **outer loop** on `i`
- one **inner loop** on `j`

And inside the inner loop it does:

```cpp
Sum = Sum + (i * j);
```

So the important idea is:

👉 For **each value of `i`**, the loop over `j` runs **n times**.

That gives us:

```text
n × n = n²
```

---

# 1️⃣ Outer Loop

```cpp
for (int i = 1; i <= n; i++)
```

This runs **n times**.

Example if `n = 3`:

```text
i = 1
i = 2
i = 3
```

---

# 2️⃣ Inner Loop

Inside every outer loop iteration, we have:

```cpp
for (int j = 1; j <= n; j++)
```

This also runs **n times**.

So if `n = 3`, then for each `i`, `j` goes:

```text
j = 1
j = 2
j = 3
```

---

# 3️⃣ Total Number of Repetitions

Since:

- outer loop runs `n` times
- inner loop runs `n` times for each outer iteration

Total work is:

```text
n × n = n²
```

✅ Therefore, the time complexity is:

> **O(n²)**

---

## 📊 Small Example

If `n = 3`, the inner statement runs like this:

```text
i=1 → j=1,2,3   → 3 times
i=2 → j=1,2,3   → 3 times
i=3 → j=1,2,3   → 3 times
```

Total:

```text
3 × 3 = 9 times
```

If `n = 5`:

```text
5 × 5 = 25
```

If `n = 100`:

```text
100 × 100 = 10,000
```

If `n = 1000`:

```text
1000 × 1000 = 1,000,000
```

You can see it grows fast 🚀

---

# 🧮 Why does the picture say something like:

```text
4 + n² → n²
```

Because in Big O, we ignore:

- constants like `4`
- smaller terms

So even if the full number of steps is something like:

```text
n² + 3n + 4
```

Big O only keeps the **largest growth term**, which is:

```text
n²
```

So:

> ✅ **Big O = O(n²)**
