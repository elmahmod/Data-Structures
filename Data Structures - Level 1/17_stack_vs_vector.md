## 🆚 Stack vs Vector

| Feature | 📚 Stack | 📦 Vector |
|---|---|---|
| Add element | `push()` | `push_back()` |
| Remove last | `pop()` | `pop_back()` |
| Get last/top | `top()` | `back()` |
| Access by index | ❌ No | ✅ Yes |
| Example | `stack[2]` ❌ | `vector[2]` ✅ |
| Behavior | LIFO | Dynamic Array |

### 🧠 Very important idea

```text
Vector
10  20  30  40  50
 ↑       ↑       ↑
Can access any element
```

```text
Stack

50 ← Only top is directly accessible
40
30
20
10
```

So:

> 📦 **Vector = dynamic array with random access**  
> 📚 **Stack = LIFO structure where we mainly work with the top**
