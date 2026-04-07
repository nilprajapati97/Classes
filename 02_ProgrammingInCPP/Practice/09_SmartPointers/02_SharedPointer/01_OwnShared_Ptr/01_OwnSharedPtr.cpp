/*

### ✅ Key Goals for Our `SharedPtr` Implementation:

1. Shared ownership through reference counting.
2. Automatic deletion when the last owner is gone.
3. Copy constructor and assignment support.
4. Destructor properly manages memory.

---

## ✅ Step-by-Step Implementation of `SharedPtr<T>`

*/
#include <iostream>

template<typename T>
class SharedPtr {
private:
    T* ptr;                  // Pointer to the managed object
    size_t* ref_count;       // Pointer to the shared reference counter

public:
    // Constructor
    explicit SharedPtr(T* p = nullptr) : ptr(p) {
        if (ptr) {
            ref_count = new size_t(1);  // Initialize ref_count to 1
        } else {
            ref_count = nullptr;
        }
    }

    // Copy Constructor
    SharedPtr(const SharedPtr& other) {
        ptr = other.ptr;
        ref_count = other.ref_count;
        if (ref_count) {
            ++(*ref_count);  // Increase reference count
        }
    }

    // Copy Assignment
    SharedPtr& operator=(const SharedPtr& other) {
        if (this != &other) {
            // Decrease old ref count and delete if needed
            release();

            // Copy new
            ptr = other.ptr;
            ref_count = other.ref_count;
            if (ref_count) {
                ++(*ref_count);
            }
        }
        return *this;
    }

    // Destructor
    ~SharedPtr() {
        release();
    }

    void release() {
        if (ref_count) {
            --(*ref_count);
            if (*ref_count == 0) {
                delete ptr;
                delete ref_count;
            }
        }
        ptr = nullptr;
        ref_count = nullptr;
    }

    // Accessors
    T& operator*() const { return *ptr; }
    T* operator->() const { return ptr; }
    T* get() const { return ptr; }

    size_t use_count() const {
        return ref_count ? *ref_count : 0;
    }

    bool unique() const {
        return use_count() == 1;
    }
};
//## 🧪 Example Usage

struct Test {
    Test() { std::cout << "Test Created\n"; }
    ~Test() { std::cout << "Test Destroyed\n"; }
    void sayHello() { std::cout << "Hello from Test\n"; }
};

int main() {
    SharedPtr<Test> sp1(new Test());  // ref_count = 1
    std::cout << "Use count: " << sp1.use_count() << "\n";

    {
        SharedPtr<Test> sp2 = sp1;    // ref_count = 2
        std::cout << "Use count: " << sp1.use_count() << "\n";
        sp2->sayHello();
    } // sp2 goes out of scope, ref_count = 1

    std::cout << "Use count: " << sp1.use_count() << "\n";
} // sp1 goes out of scope, ref_count = 0, object deleted

/*
### 🧾 Output:
Test Created
Use count: 1
Use count: 2
Hello from Test
Use count: 1
Test Destroyed

### 🔍 What's Missing in Our Simple Version?

| Feature            | Missing in this version                       |
| ------------------ | --------------------------------------------- |
| Thread safety      | ❌ `std::atomic` not used for ref count.       |
| `make_shared`      | ❌ Not implemented (performance optimization). |
| `weak_ptr` support | ❌ Not yet.                                    |
| Custom deleters    | ❌ Not yet.                                    |

Would you like to extend this to include `weak_ptr` or make it thread-safe too?
*/