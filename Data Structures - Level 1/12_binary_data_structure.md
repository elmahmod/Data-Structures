## 🧠 Binary Data Structure — Simple Explanation

### 🔢 Each permission has a number
Each permission gets a value that is a power of 2:

| Permission | Value |
|---|---:|
| 👀 Show Client List | 1 |
| ➕ Add New Client | 2 |
| 🗑️ Delete Client | 4 |
| ✏️ Update Client | 8 |
| 🔍 Find Client | 16 |
| 💰 Transactions | 32 |
| 👤 Manage Users | 64 |
| 🔐 Show Login Register | 128 |

### ✅ How do we get 79?

In the picture, the user has these permissions:

```text
1 + 2 + 4 + 8 + 64 = 79
```

So:

> 🎯 **79 represents all the permissions that are turned ON.**

### 💻 In binary

```text
128  64  32  16   8   4   2   1
 0    1   0   0   1   1   1   1
```

So:

```text
79 = 01001111
```

### 💡 Main idea

Each bit is like a switch:

```text
1 = ✅ Permission ON
0 = ❌ Permission OFF
```

This technique is commonly called **Bit Flags** or a **Bitmask**.