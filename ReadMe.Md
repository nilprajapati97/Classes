<div align="center">

# 📚 Classes — C, C++ & Networking Notes

[![C](https://img.shields.io/badge/Language-C-blue?logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![C++](https://img.shields.io/badge/Language-C%2B%2B-00599C?logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![TCP/IP](https://img.shields.io/badge/Networking-TCP%2FIP-orange?logo=cisco&logoColor=white)](https://en.wikipedia.org/wiki/Internet_protocol_suite)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

> A comprehensive collection of class notes, code examples, interview prep, and exploration of **C**, **C++** (14/17/20), and **TCP/IP** networking concepts.

</div>

---

## 📂 Repository Structure

```
Classes/
├── 01_ProgrammingInC/          # C Programming
├── 02_ProgrammingInCPP/        # C++ Programming
└── 03_TCP_IP/                  # TCP/IP Networking
```

---

## 🔵 01 — Programming in C

Structured learning material and practice for the C language.

| Folder | Description |
|--------|-------------|
| `Class/` | Core topics: arrays, bitwise ops, files, linked lists, recursion, strings, patterns, type casting & more |
| `CodeOptimization/` | Techniques for writing efficient C code; bit manipulation & register-level tricks |
| `Explore/` | Deep dives — reversing linked list nodes, advanced exercises |
| `Practice/` | Assignments and hands-on exercises |
| `Topics/` | Focused topics: function pointers, conditional compilation, memory layout |

### �� Key Topics Covered

- ✅ Arrays, Strings, Pointers
- ✅ Bitwise Operations & Bit Manipulation
- ✅ File I/O
- ✅ Linked Lists & Recursion
- ✅ Control Flow & Patterns
- ✅ Scope, Type Casting
- ✅ Function Pointers
- ✅ Conditional Compilation (`#ifdef` / `#ifndef`)
- ✅ Memory Layout in C

---

## 🟣 02 — Programming in C++

In-depth C++ coverage from basics to modern standards.

| Folder | Description |
|--------|-------------|
| `Class/` | Comprehensive class notes across 19 modules |
| `Explore/` | Namespace, custom Vector & String classes, function pointer replacement |
| `InDepth/` | Advanced patterns: namespace deep dive, custom containers, string class design |
| `Interviews/` | Curated interview problems and solutions |
| `Practice/` | Assignments and mini-projects |
| `Version/` | Features introduced in C++14, C++17, and C++20 |

### 🗂 Class Modules

| # | Module |
|---|--------|
| 01 | Basics |
| 02 | Default Members |
| 03 | Constructors |
| 04 | Operator Overloading |
| 05 | Virtual Functions |
| 06 | Threading |
| 07 | Data Structures |
| 08 | Lambda Expressions |
| 09 | Smart Pointers |
| 10 | STL (Standard Template Library) |
| 11 | Design Patterns |
| 12 | Templates |
| 13 | Strings |
| 14 | Default Arguments |
| 15 | `mutable` Keyword |
| 16 | Interview Preparation |
| 17 | Extra Utilities |

### 🆕 Modern C++ Standards

| Standard | Features |
|----------|----------|
| **C++14** | Generic Lambdas, Return Type Deduction, `make_unique`, Variable Templates, Relaxed `constexpr`, Digit Separators |
| **C++17** | Structured Bindings, `std::optional`, `if constexpr`, Fold Expressions, Class Template Argument Deduction |
| **C++20** | Concepts, Ranges, Coroutines, Modules |

---

## 🟠 03 — TCP/IP Networking

Practical client-server programming using POSIX sockets.

| Folder | Description |
|--------|-------------|
| `client_server/` | Full TCP/UDP client-server examples, multiplexing with `select()`, TFTP, command-based clients |

### 🗂 Key Topics Covered

- ✅ TCP Client / Server
- ✅ UDP Client / Server
- ✅ `select()` — I/O multiplexing
- ✅ TFTP (Trivial File Transfer Protocol)
- ✅ Command-line based network clients
- ✅ Multiple concurrent connections
- ✅ File transfer over sockets
- ✅ Database server simulation

---

## 🚀 Getting Started

### Prerequisites

```bash
# GCC for C programs
sudo apt install gcc

# G++ for C++ programs
sudo apt install g++
```

### Compile & Run a C Program

```bash
cd 01_ProgrammingInC/Class/AsArrays
gcc program.c -o program
./program
```

### Compile & Run a C++ Program

```bash
cd 02_ProgrammingInCPP/Class
g++ -std=c++17 sample.cpp -o sample
./sample
```

### Run a TCP/IP Example

```bash
cd 03_TCP_IP/client_server

# Terminal 1 — start the server
gcc server.c -o server && ./server

# Terminal 2 — start the client
gcc client.c -o client && ./client
```

---

## 🤝 Contributing

Contributions, corrections, and new examples are welcome!

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/new-topic`)
3. Commit your changes (`git commit -m 'Add new topic'`)
4. Push to the branch (`git push origin feature/new-topic`)
5. Open a Pull Request

---

## 📄 License

This repository is available under the [MIT License](LICENSE).

---

<div align="center">

Made with ❤️ for learners of C, C++, and Systems Programming

</div>
