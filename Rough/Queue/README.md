**Queue in C++ STL**:

```markdown
# Queue in C++ STL

A **queue** is a container in C++ that follows the **FIFO** (First In First Out) order. Elements are inserted at the **back** and removed from the **front**. This behavior ensures that the elements inserted first are removed first.

---

## Syntax

Queue is defined as the `std::queue` class template inside the `<queue>` header file.

```cpp
#include <queue>
queue<T> q;
```

- **T**: Type of elements (e.g., `int`, `string`).
- **q**: Name of the queue.

---

## Declaration & Initialization

Queues can be declared and initialized in several ways:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q1; // Empty queue
    queue<int> q2(q1); // Create a copy of another queue q1

    q1.push(3);
    q1.push(4);
    q1.push(5);

    while (!q2.empty()) {
        cout << q2.front() << " ";
        q2.pop();
    }
    return 0;
}
```

---

## Basic Operations

### 1. **Inserting Elements** (Enqueue)
Elements can be added to the back of the queue using `push()`.

```cpp
queue<int> q;
q.push(3);
q.push(4);
q.push(5);
```

### 2. **Accessing Elements**
Only the **front** and **back** elements can be accessed using `front()` and `back()`.

```cpp
cout << q.front() << endl; // Front element
cout << q.back() << endl;  // Back element
```

### 3. **Deleting Elements** (Dequeue)
Elements can only be deleted from the front using `pop()`.

```cpp
q.pop(); // Removes the front element
```

### 4. **Pseudo Traversal**
Since direct traversal is not possible, you can create a copy of the queue, access and pop elements from the copy.

```cpp
queue<int> temp(q);
while (!temp.empty()) {
    cout << temp.front() << " ";
    temp.pop();
}
```

---

## Time Complexity

| Operation               | Time Complexity |
|-------------------------|-----------------|
| Insert an element       | O(1)            |
| Delete an element       | O(1)            |
| Access front element    | O(1)            |
| Access back element     | O(1)            |
| Traverse the queue      | O(n)            |

---

## Other Common Operations

- **Find the Size of Queue**
    ```cpp
    cout << q.size() << endl;
    ```
  
- **Check if the Queue is Empty**
    ```cpp
    if (q.empty()) {
        cout << "Queue is empty." << endl;
    }
    ```
  
- **Swap Two Queues**
    ```cpp
    queue<int> q1, q2;
    q1.push(1); q2.push(2);
    q1.swap(q2);
    ```

- **Reverse a Queue**: While the STL doesn't provide direct functionality, you can reverse a queue manually using a stack or deque.

---

## Internal Working of Queue

The queue is a container adaptor built on top of a container like `deque` or `list`, which allows constant time insertions at the back and deletions from the front.

**Note**: A **vector** cannot be used as the underlying container for a queue, as it doesn't allow constant time deletion from the front.

---

## All Member Functions

| Function     | Description                                            |
|--------------|--------------------------------------------------------|
| `front()`    | Access the front element of the queue.                 |
| `back()`     | Access the last element of the queue.                  |
| `empty()`    | Checks whether the queue is empty.                     |
| `size()`     | Returns the number of elements in the queue.           |
| `push()`     | Adds an element to the back of the queue.              |
| `push_range()`| Adds multiple elements at the end of the queue.        |
| `emplace()`  | Constructs and adds an element at the front.           |
| `pop()`      | Removes the front element from the queue.              |
| `swap()`     | Swaps the contents of two queues.                      |

---

This **README** provides an overview of the **queue** container in C++ STL, with basic operations and commonly used functions.
```
