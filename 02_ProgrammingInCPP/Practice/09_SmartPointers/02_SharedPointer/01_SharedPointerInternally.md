### 🔄 How `std::shared_ptr` Works Internally (Explained from Scratch)

`std::shared_ptr` is a **smart pointer** that manages the lifetime of a dynamically allocated object through **reference counting**. Multiple `shared_ptr` instances can own the same object. The object is destroyed only when the **last shared\_ptr** owning it is destroyed or reset.

---

## 🧠 Internal Mechanism

### 1. **Control Block**

Each `shared_ptr` shares an internal **control block** that holds:

| Element              | Purpose                                       |
| -------------------- | --------------------------------------------- |
| `ref_count`          | Tracks how many `shared_ptr`s own the object. |
| `weak_count`         | Tracks `weak_ptr`s referencing the object.    |
| `deleter` (optional) | Custom cleanup logic.                         |
| `pointer`            | Pointer to the actual object.                 |

---

## 🔁 Life Cycle

### ➕ Creation:

```cpp
std::shared_ptr<int> sp1(new int(10));
```

* A `control block` is created.
* `ref_count = 1`

### ➕ Copy:

```cpp
std::shared_ptr<int> sp2 = sp1;
```

* Both `sp1` and `sp2` now point to the same object.
* `ref_count = 2`

### ➖ Destruction:

```cpp
sp1.reset();  // or sp1 goes out of scope
```

* `ref_count = 1`
* Object is **not destroyed**.

```cpp
sp2.reset();  // now ref_count = 0
```

* Object is destroyed automatically (via `delete` or custom deleter).
* `control block` is also deallocated if no `weak_ptr` exists.

---

## ✅ Automatic Deallocation

When `ref_count == 0`, the object is deleted.
When `ref_count == 0` **and** `weak_count == 0`, the control block is also destroyed.

So:

* Memory is released **automatically** when no `shared_ptr` points to the object.
* Ensures **safe resource cleanup** even in complex graphs.

---

## 🧪 Example: Demonstrating Internal Flow

```cpp
#include <iostream>
#include <memory>
using namespace std;

class Test {
public:
    Test() { cout << "Test Created\n"; }
    ~Test() { cout << "Test Destroyed\n"; }
    void show() { cout << "Hello\n"; }
};

int main() {
    shared_ptr<Test> sp1(new Test());  // ref_count = 1
    {
        shared_ptr<Test> sp2 = sp1;    // ref_count = 2
        sp2->show();
    } // sp2 destroyed => ref_count = 1

    sp1->show();

} // sp1 destroyed => ref_count = 0 => object destroyed
```

### 🧾 Output:

```
Test Created
Hello
Hello
Test Destroyed
```

---

## 🔄 Reference Count Internals (Simplified)

Imagine this behind the scenes:

```cpp
struct ControlBlock {
    int ref_count = 1;
    int weak_count = 0;
    void* ptr;
};
```

On every `shared_ptr` copy:

```cpp
control_block->ref_count++;
```

On `shared_ptr` destruction:

```cpp
control_block->ref_count--;
if (ref_count == 0) delete ptr;
```

---

## ⚠️ Shared\_ptr Cautions

| Concern             | Explanation                                              |
| ------------------- | -------------------------------------------------------- |
| ❌ Cyclic references | Can cause memory leaks (use `weak_ptr` to break cycles). |
| 🔄 Slight overhead  | Due to control block + atomic ref counts.                |
| ✅ Thread-safe       | Reference count increments/decrements are atomic.        |

---

## ✅ Summary

| Feature      | `shared_ptr` Behavior                             |
| ------------ | ------------------------------------------------- |
| Ownership    | Shared among many owners                          |
| Ref counting | Automatic via control block                       |
| Deletion     | When last shared\_ptr is gone                     |
| Safe         | Prevents dangling pointers                        |
| Use case     | Shared ownership (e.g., trees, graphs, callbacks) |

---

Let me know if you want to implement your own `shared_ptr` from scratch to understand how this works internally.
