`std::unique_ptr` is a **smart pointer** in C++ that provides **exclusive ownership** of a dynamically allocated object. Unlike `shared_ptr`, it doesn’t use reference counting. It ensures that only one `unique_ptr` owns a given object at any time, and it automatically deallocates memory when it goes out of scope.

---

### ✅ **Core Concept**

* Wraps a raw pointer.
* Enforces **single ownership** (non-copyable).
* Automatically `delete`s the object when it is destroyed or reset.

---

### 🧱 **Internal Structure (Simplified)**

```cpp
template<typename T>
class unique_ptr {
    T* ptr;

public:
    explicit unique_ptr(T* p = nullptr) : ptr(p) {}
    ~unique_ptr() { delete ptr; }

    // Move constructor
    unique_ptr(unique_ptr&& other) noexcept {
        ptr = other.ptr;
        other.ptr = nullptr;
    }

    // Deleted copy constructor and copy assignment
    unique_ptr(const unique_ptr&) = delete;
    unique_ptr& operator=(const unique_ptr&) = delete;

    // Move assignment
    unique_ptr& operator=(unique_ptr&& other) noexcept {
        if (this != &other) {
            delete ptr;
            ptr = other.ptr;
            other.ptr = nullptr;
        }
        return *this;
    }

    T* get() const { return ptr; }
    T* operator->() const { return ptr; }
    T& operator*() const { return *ptr; }
};
```

---

### 🔄 **How It Manages Memory**

* When you create a `unique_ptr`, it holds the raw pointer.
* When `unique_ptr` is destroyed, its destructor calls `delete` on the raw pointer.
* If you want to transfer ownership, use `std::move()`.

---

### 🧪 Example

```cpp
#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass() { std::cout << "Constructed\n"; }
    ~MyClass() { std::cout << "Destroyed\n"; }
};

int main() {
    std::unique_ptr<MyClass> up1 = std::make_unique<MyClass>();

    // Transfer ownership
    std::unique_ptr<MyClass> up2 = std::move(up1); // up1 is now null

    if (!up1) {
        std::cout << "up1 is null\n";
    }
}
```

### 🔎 Output:

```
Constructed
up1 is null
Destroyed
```

---

### ⚠️ Key Characteristics

| Feature            | `unique_ptr`        |
| ------------------ | ------------------- |
| Ownership          | Exclusive           |
| Copyable           | ❌ No                |
| Movable            | ✅ Yes (`std::move`) |
| Reference Counting | ❌ No                |
| Thread Safety      | ❌ Not inherently    |
| Auto-deletion      | ✅ Yes (RAII)        |

---

### 🔥 Deallocation Mechanism

* When `unique_ptr` goes out of scope or is reset:

  ```cpp
  ~unique_ptr() {
      delete ptr;
  }
  ```

---

### 👥 When to Use `unique_ptr`

* When you want **fast, lightweight** ownership management.
* You don't need shared access to the object.
* Great for **scoped resources**, e.g., file handles, memory buffers.

---

Let me know if you want a **diagram** showing its lifecycle or how move semantics work.
