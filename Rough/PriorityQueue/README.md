Here is the **README.md** in proper format with code snippets:

```markdown
# Priority Queue in C++ STL

A **priority queue** is a type of queue where elements are removed based on their priority. By default, the element with the highest value has the highest priority (max-heap). This can be customized to suit different priority schemes.

---

## Table of Contents

1. [Syntax](#syntax)  
2. [Example](#example)  
3. [Operations](#operations)  
4. [Time Complexity](#time-complexity)  
5. [Common Operations](#common-operations)  
6. [Priority Queue vs Queue](#priority-queue-vs-queue)  
7. [Member Functions](#member-functions)

---

## Syntax

```cpp
#include <queue>
priority_queue<T, c, comp> pq;
```

- `T`: Type of the elements.
- `c`: Underlying container (defaults to `vector<T>`).
- `comp`: Comparison function (optional).

---

## Example

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(9);
    pq.push(10);
    pq.push(6);

    cout << pq.top() << " ";  // Output: 10
    return 0;
}
```

In this example, the priority queue stores integers, and the largest element (10) is printed.

---

## Operations

### 1. Inserting Elements

Elements can be inserted using `push()`.

```cpp
pq.push(9);
pq.push(8);
pq.push(6);
```

### 2. Accessing Top Element

Access the element with the highest priority using `top()`.

```cpp
cout << pq.top();  // Output: 9
```

### 3. Deleting Elements

Remove the top element using `pop()`.

```cpp
pq.pop();
cout << pq.top();  // Output: 8
```

### 4. Pseudo Traversal

To traverse all elements, copy the priority queue and pop elements.

```cpp
priority_queue<int> temp(pq);
while (!temp.empty()) {
    cout << temp.top() << " ";
    temp.pop();
}  // Output: 9 8 6
```

### 5. Changing Priority Order

You can use a custom comparator (e.g., min-heap).

```cpp
priority_queue<int, vector<int>, greater<int>> pq;
pq.push(9);
pq.push(8);
pq.push(6);
```

This gives the output: `6 8 9` (smallest first).

---

## Time Complexity

| Operation                        | Time Complexity |
|-----------------------------------|-----------------|
| Add element (`push()`)            | O(log n)        |
| Delete element (`pop()`)          | O(log n)        |
| Find maximum element (max-heap)   | O(1)            |
| Find minimum element (min-heap)   | O(1)            |
| Initialize from another container | O(n)            |

---

## Common Operations

- Find the **size** of the priority queue.
- Check if the queue is **empty**.
- **Reverse** the priority queue.
- Create a priority queue of **tuples**.
- Create a queue with **custom priority** criteria.
- **Swap** two priority queues.

---

## Priority Queue vs Queue

- A **queue** follows the FIFO principle (first-in, first-out).
- A **priority queue** stores elements in order of priority, where the highest priority element is always at the top.

---

## Member Functions

| Function | Definition |
|----------|------------|
| `empty()` | Checks if the priority queue is empty. |
| `size()`  | Returns the size of the priority queue. |
| `top()`   | Returns the top element. |
| `push()`  | Adds an element to the priority queue. |
| `pop()`   | Removes the top element. |
| `swap()`  | Swaps the contents of two priority queues. |
| `emplace()` | Inserts a new element into the priority queue. |

---
```

This **README.md** now contains all the relevant code examples and explanations in the appropriate sections.