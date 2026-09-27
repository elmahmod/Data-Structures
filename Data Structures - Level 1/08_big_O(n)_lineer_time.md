# ➡️ Big O(n): Linear Time Function

**O(n)** means **Linear Time**.

This means:

> 📈 As the amount of data `n` increases, the amount of work increases approximately in the same proportion.

---

## 🔍 Example from your picture

```cpp
char GetLastCharacter2(string s1)
{
    int n = s1.length() - 1;

    for (int i = 0; i <= n; i++)
    {
        if (i == n)
        {
            return s1[n];
        }
    }
}
```

The function returns the **last character** of the string, but instead of going directly to it, it uses a loop.

For example:

```text
s1 = "HELLO"
```

The indexes are:

```text
Index:   0   1   2   3   4
         H   E   L   L   O
                         ↑
                       last
```

The loop starts from `0` and continues until it reaches the last position.

---

## 1️⃣ Steps Outside the Loop

First:

```cpp
int n = s1.length() - 1;
```

These operations happen only once.

The picture simplifies them as approximately:

```text
4 steps
```

So we have a **constant amount of work** outside the loop.

---

## 2️⃣ Steps Inside the Loop 🔄

Now look at:

```cpp
for (int i = 0; i <= n; i++)
```

The loop runs again and again depending on the size of the string.

Inside it, we also have:

```cpp
if (i == n)
```

So if the string contains more characters, we perform more iterations.

The picture estimates about:

```text
6 steps × n
```

So:

```text
Steps inside loop  = 6n
Steps outside loop = 4
```

Total:

```text
6n + 4
```

---

# 🧮 Why Does `6n + 4` Become O(n)?

Big O focuses on **how the work grows when `n` becomes very large**.

We start with:

```text
6n + 4
```

Ignore the constant `4`:

```text
6n
```

Ignore the constant multiplier `6`:

```text
n
```

Therefore:

> ✅ **O(n)**

We are not saying that the program literally performs only `n` operations. We are saying its **growth is linear with `n`**.

---

## 📊 Simple Example

Imagine the algorithm performs roughly `6n + 4` operations:

| Input size `n` | Approximate operations |
|---:|---:|
| 10 | 64 |
| 100 | 604 |
| 1,000 | 6,004 |
| 10,000 | 60,004 |

Notice:

```text
n × 10  → work ≈ × 10
```

That is **linear growth** 📈.
