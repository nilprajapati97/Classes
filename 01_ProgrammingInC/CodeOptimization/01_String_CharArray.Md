Great question 👌 Let’s carefully analyze both functions.

---

### 📌 Function 1

```c
char* fn1()
{	
    char *str = "Hello World";
    return str;
}
```

* Here `str` is a **pointer to a string literal** `"Hello World"`.
* String literals are stored in **read-only memory** (in `.rodata` section).
* When you `return str;`, you are returning the pointer to that **valid memory**.
* ✅ So `fn1()` returns a valid pointer to `"Hello World"`.

---

### 📌 Function 2

```c
char* fn2()
{
    char str[] = "Hello World";
    return str;
}
```

* Here `str` is a **local array** inside the function.
* Its storage is on the **stack frame of fn2()**.
* Once the function exits, the stack frame is destroyed → memory for `str` is invalid.
* ❌ Returning `str` gives a **dangling pointer** (undefined behavior if accessed).

---

### ✅ Conclusion

* `fn1()` → **Returns a valid address** (string literal in static memory).
* `fn2()` → **Returns an invalid address** (local array on stack, freed after function returns).

---

⚠️ Small note: In `fn1()`, the returned pointer is valid but the string literal should **not be modified** (e.g., `*str = 'h';` → undefined behavior).

👉 Do you want me to also show what happens in **assembly/memory layout** for both cases (so you can use it in an interview whiteboard explanation)?
