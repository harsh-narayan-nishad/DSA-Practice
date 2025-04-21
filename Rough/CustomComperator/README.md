Here's the content formatted for **README.md** with short notes on **Custom Comparator in `priority_queue` (C++ STL)**:

```markdown
# Custom Comparator in `priority_queue` (C++ STL)

A **custom comparator** allows you to define custom sorting logic in a `priority_queue`. It determines the order of elements based on specific conditions, making it highly versatile for complex objects.

---

## Key Points

- **Priority Queue**: A container adapter that operates as a heap (either max-heap or min-heap).
- **Custom Comparator**: Used to define custom ordering when the default max or min order doesn't suit the requirements.
- **Functionality**: Allows sorting based on non-ascending/descending logic, such as sorting pairs by different criteria.
- **Comparator Behavior**: The comparator should return `true` when the order is not correct, causing a swap, and `false` when the order is correct.

---

## Syntax

```cpp
priority_queue<data_type, container, comparator> ds;
```

### Parameters:
- **data_type** (mandatory): Type of elements (e.g., `int`, `pair<int, int>`, or custom types).
- **container** (optional): Underlying container (typically `vector` or `deque`).
- **comparator** (optional): Custom comparator function or class to define the order.

---

## Custom Comparator Example

```cpp
class Compare {
public:
    bool operator()(PII a, PII b) {
        if (a.first > b.first) {
            return true;
        } else if (a.first == b.first && a.second < b.second) {
            return true;
        }
        return false;
    }
};
```

- In this example, `Compare` class ensures:
  - Sort by **ascending** order of the first element.
  - If first elements are equal, sort by **descending** order of the second element.

---

## Example Usage

```cpp
#include <iostream>
#include <queue>
#define PII pair<int, int>

using namespace std;

int main() {
    priority_queue<PII, vector<PII>, Compare> pq;
    pq.push({100, 11});
    pq.push({100, 41});
    pq.push({100, 21});
    pq.push({300, 1});
    pq.push({1, 1});
    pq.push({1, 20});

    while (!pq.empty()) {
        cout << pq.top().first << " " << pq.top().second << "\n";
        pq.pop();
    }

    return 0;
}
```

**Output:**

```
1 20
1 1
100 41
100 21
100 11
300 1
```

---

## Time and Space Complexity

- **Time Complexity**: 
  - For a single insertion: O(log N)
  - For N insertions: O(N log N)
  
- **Space Complexity**: O(N), where N is the number of elements in the priority queue.

---
