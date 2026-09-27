# ⚡ Big O(1): Constant Time Function

**O(1)** means **constant time**.

This means the number of operations stays approximately the **same**, no matter how large the input becomes.

Look at the function from your picture:

```cpp
char GetLastCharacter(string s1)
{
    return s1[s1.length() - 1];
}
```

Its job is simple: **return the last character of the string**.

For example:

```text
s1 = "HELLO"

Last character = 'O'
```

## 🔍 Counting the Steps

For this simplified analysis, we can think of:

```cpp
return s1[s1.length() - 1];
```

as a few constant-time steps:

1. `s1.length()` → get the string length
2. `- 1` → calculate the last index
3. `s1[...]` → access that character
4. `return` → return the character

So we might say:

```text
4 operations
```

Each one is treated as **O(1)**:

```text
4 × O(1)
```

But Big O **ignores constant factors**, so:

```text
O(4) → O(1)
```

✅ Therefore:

> **Time Complexity = O(1)**

---

## 🧠 Why is it O(1)?

Suppose the string has:

```text
5 characters
```

We do roughly the same small number of operations.

Now suppose it has:

```text
1,000 characters
```

We still do roughly the same number of operations.

Even with:

```text
1,000,000 characters
```

we directly access the last character rather than checking every character one by one.

So:

```text
Input size       Operations
5                ~4
1,000            ~4
1,000,000        ~4
```

The amount of work does **not grow with `n`**.

That is why it is called:

> ⚡ **Constant Time — O(1)**
