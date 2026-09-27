# 🧩 Matrix Data Structure

## 🧠 What is a Matrix?

A **matrix** is basically a **2D array**.

Instead of having only one row like this:

```text
10  20  30  40
```

A matrix has **rows and columns**:

```text
1   2   3   4
5   6   7   8
9  10  11  12
```

---

## 📍 Rows and Columns

For this matrix:

```text
       Col0 Col1 Col2 Col3
Row0     1    2    3    4
Row1     5    6    7    8
Row2     9   10   11   12
```

We access an element using:

```cpp
arr[row][column]
```

For example:

```cpp
arr[1][2]
```

means:

```text
Row 1 + Column 2
```

So the value is:

```text
7
```

---

## 💻 C++ Example

```cpp
int arr[3][4] =
{
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};
```

---

# ⚡ Time Complexity

## 👀 Access One Element

```cpp
cout << arr[1][2];
```

The computer can go directly to that position.

```text
Time Complexity → O(1) ⚡
```

---

## ✏️ Update One Element

```cpp
arr[1][2] = 100;
```

This changes:

```text
7 → 100
```

Time Complexity:

```text
O(1) ⚡
```

---

## 🔄 Access All Elements

Usually we use **two loops**:

```cpp
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        cout << arr[i][j] << " ";
    }
}
```

For a square matrix of size `N × N`:

```text
O(N²)
```

because we visit:

```text
N rows × N columns
```

For a matrix with `R` rows and `C` columns:

```text
O(R × C)
```

---

# 🎯 Remember

> 🧩 **Matrix = Array of rows and columns**

```text
Access one element   → O(1) ⚡
Update one element   → O(1) ⚡
Visit all elements   → O(N²) for N × N matrix
```

And:

```cpp
arr[row][column]
```

Example:

```cpp
arr[2][3]
```

means:

```text
3rd row, 4th column
```

because indexes start from **0**.