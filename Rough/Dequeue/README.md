

```markdown
# Deque in C++ STL

A **deque** (double-ended queue) is a sequence container that allows fast insertion and deletion at both ends. It supports random access and is implemented using dynamic arrays.

---

## Key Points
- **Fast Operations**: Insertion and deletion at both ends in **constant time**.
- **Random Access**: Allows **O(1)** access to elements by index.
- **Double-ended**: Operations can be performed at both the front and back of the deque.

---

## Syntax

```cpp
#include <deque>
deque<T> dq;
```

- **T**: Type of elements (e.g., `int`, `string`).
- **dq**: Name of the deque.

---

## Declaration & Initialization

```cpp
deque<int> dq1;              // Empty deque
deque<int> dq2(3, 4);        // Deque of 3 elements, each initialized to 4
deque<int> dq3 = {1, 4, 2};  // Deque initialized with values
```

---

## Basic Operations

1. **Inserting Elements**

   ```cpp
   dq.push_back(5);    // Add to back
   dq.push_front(0);   // Add to front
   dq.insert(dq.begin() + 2, 11);  // Insert at specific position
   ```

2. **Accessing Elements**

   ```cpp
   cout << dq[2];      // Access by index
   cout << dq.front(); // First element
   cout << dq.back();  // Last element
   ```

3. **Updating Elements**

   ```cpp
   dq[2] = 8;          // Update element at index 2
   ```

4. **Traversing**

   ```cpp
   for (int i = 0; i < dq.size(); i++) cout << dq[i] << " ";
   ```

5. **Deleting Elements**

   ```cpp
   dq.pop_back();      // Remove from back
   dq.pop_front();     // Remove from front
   dq.erase(dq.begin()); // Remove at specific position
   ```

---

## Time Complexity

| Operation                         | Time Complexity |
|------------------------------------|-----------------|
| Insert at back/front              | O(1)            |
| Insert at arbitrary position      | O(n)            |
| Remove from back/front            | O(1)            |
| Remove from arbitrary position    | O(n)            |
| Access/update element by index    | O(1)            |
| Iterate through deque             | O(n)            |

---

## Common Member Functions

- **push_front()**: Adds element to the front.
- **push_back()**: Adds element to the back.
- **pop_front()**: Removes element from the front.
- **pop_back()**: Removes element from the back.
- **front()**: Returns first element.
- **back()**: Returns last element.
- **insert()**: Inserts element at a specific position.
- **erase()**: Removes elements at a specific position.
- **size()**: Returns the number of elements.
- **clear()**: Removes all elements.
- **begin()**/**end()**: Iterators for traversing.
- **emplace()**: Adds element in-place.

---

## Deque vs Queue

- **Queue**: Insertion at one end, deletion at the other (FIFO).
- **Deque**: Insertion and deletion at both ends (double-ended).

---

## Internal Working of Deque
A **deque** is implemented using multiple blocks of memory rather than a single contiguous memory block, allowing efficient insertion and deletion at both ends.

---

This README provides a compact guide to the most common operations and syntax used with the **deque** in C++ STL.
```