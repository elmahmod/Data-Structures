A **Map** is a data structure that stores data as **key-value pairs**.

Example:

```text
Key      → Value
101      → "Ali"
102      → "Sara"
103      → "Omar"
```

Here:

- `101` is the **key**
- `"Ali"` is the **value**

The important rule is:

```text
Each key must be unique.
```

So you cannot have:

```text
101 → "Ali"
101 → "Sara"   ❌
```

because the same key appears twice.

In C++:

```cpp
#include <map>
#include <iostream>
using namespace std;

int main()
{
    map<int, string> students;

    students[101] = "Ali";
    students[102] = "Sara";
    students[103] = "Omar";

    cout << students[102];
}
```

Output:

```text
Sara
```

Because we searched using the key `102`.

A simple way to think about a Map is like a **dictionary**:

```text
"apple"  → "تفاحة"
"book"   → "كتاب"
"car"    → "سيارة"
```

The word is the **key**, and its meaning is the **value**.

So remember:

```text
Map = Key + Value

Key → Value
```

And common operations are:

```text
insert   → add a key-value pair
find     → search using a key
erase    → delete a key-value pair
```

In C++, `std::map` also keeps its keys **sorted automatically**.