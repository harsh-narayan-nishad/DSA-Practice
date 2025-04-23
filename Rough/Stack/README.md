# 📚 Stack Implementation Using Queues

This project demonstrates how to implement a **Stack** (Last-In-First-Out data structure) using one or two **Queues** (First-In-First-Out). It explores three different approaches with trade-offs in time complexity.

---

## 🧠 Approach 1: Making `push()` Costly

### Logic
- Use two queues: `q1` and `q2`.
- For every `push(x)`, enqueue `x` to `q2`, then move all elements from `q1` to `q2`.
- Swap the names of `q1` and `q2`.

### Time Complexity
- `push()`: O(n)
- `pop()`: O(1)
- `top()`: O(1)

```cpp
void push(int x) {
    q2.push(x);
    while (!q1.empty()) {
        q2.push(q1.front());
        q1.pop();
    }
    swap(q1, q2);
}

void pop() {
    if (!q1.empty()) q1.pop();
}
⚙️ Approach 2: Making pop() Costly
Logic
Always enqueue to q1.

For pop(), move all elements except the last from q1 to q2, then dequeue the last.

Swap q1 and q2.

Time Complexity
push(): O(1)

pop(): O(n)

top(): O(n)

cpp
Copy
Edit
void push(int x) {
    q1.push(x);
}

void pop() {
    while (q1.size() > 1) {
        q2.push(q1.front());
        q1.pop();
    }
    q1.pop();
    swap(q1, q2);
}
🧃 Approach 3: Single Queue Only
Logic
For every new element, push it and then rotate the previous elements behind it.

Time Complexity
push(): O(n)

pop(): O(1)

top(): O(1)

cpp
Copy
Edit
void push(int x) {
    int size = q.size();
    q.push(x);
    while (size--) {
        q.push(q.front());
        q.pop();
    }
}

void pop() {
    if (!q.empty()) q.pop();
}
📝 Summary

Approach	Queues Used	push()	pop()	top()	Space
Push Costly	2	O(n)	O(1)	O(1)	O(n)
Pop Costly	2	O(1)	O(n)	O(n)	O(n)
Single Queue Optimized	1	O(n)	O(1)	O(1)	O(n)
🧪 Sample Output
arduino
Copy
Edit
current size: 3
3
2
1
current size: 1
📌 Note
This is a classic data structures problem often asked in interviews to test understanding of queues and stacks, as well as problem-solving under constraints.
