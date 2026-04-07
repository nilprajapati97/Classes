/*
Here’s a minimal **custom implementation** of `unique_ptr` in C++ with example usage. It covers:

* Constructor
* Destructor
* Move constructor
* Move assignment
* Deleted copy constructor and assignment
* Overloaded `*` and `->` operators
*/
//           ✅ **Custom `MyUniquePtr` Implementation + Usage**
//########################################################################

#include <iostream>
using namespace std;

template<typename T>
class MyUniquePtr {
private:
    T* ptr;

public:
    // Constructor
    explicit MyUniquePtr(T* p = nullptr) : ptr(p) {}

    // Destructor: delete managed object
    ~MyUniquePtr() {
        if (ptr) {
            cout << "Deleting resource\n";
            delete ptr;
        }
    }

    // Deleted copy constructor
    MyUniquePtr(const MyUniquePtr&) = delete;

    // Deleted copy assignment
    MyUniquePtr& operator=(const MyUniquePtr&) = delete;

    // Move constructor
    MyUniquePtr(MyUniquePtr&& other) noexcept : ptr(other.ptr) {
        other.ptr = nullptr;
    }

    // Move assignment
    MyUniquePtr& operator=(MyUniquePtr&& other) noexcept {
        if (this != &other) {
            delete ptr;             // Free current resource
            ptr = other.ptr;        // Transfer ownership
            other.ptr = nullptr;
        }
        return *this;
    }

    // Accessors
    T* get() const { return ptr; }
    T& operator*() const { return *ptr; }
    T* operator->() const { return ptr; }

    // Reset
    void reset(T* p = nullptr) {
        delete ptr;
        ptr = p;
    }

    // Release ownership
    T* release() {
        T* temp = ptr;
        ptr = nullptr;
        return temp;
    }

    // Check if pointer is valid
    operator bool() const {
        return ptr != nullptr;
    }
};

//                       ### 🧪 **Usage Example**
// =============================================================================
class Demo {
public:
    Demo() { cout << "Demo constructed\n"; }
    ~Demo() { cout << "Demo destructed\n"; }
    void hello() { cout << "Hello from Demo\n"; }
};

int main() {
    {
        MyUniquePtr<Demo> ptr1(new Demo);
        ptr1->hello();

        // Transfer ownership to ptr2
        MyUniquePtr<Demo> ptr2 = std::move(ptr1);

        if (!ptr1)
            cout << "ptr1 is now null\n";

        ptr2->hello();
    } // ptr2 goes out of scope and deletes the resource

    return 0;
}
/*

### 🧾 **Output**

```
Demo constructed
Hello from Demo
ptr1 is now null
Hello from Demo
Deleting resource
Demo destructed
```

---

### ✅ Summary

* `MyUniquePtr` mimics `std::unique_ptr` behavior.
* Enforces single ownership using move semantics.
* Automatically cleans up resources.
* Prevents memory leaks by design.

Let me know if you want to extend it with **custom deleters** or work with arrays (e.g. `T[]`).
*/