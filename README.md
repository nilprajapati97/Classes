<div align="center">

<!-- Hero Banner -->
<img src="https://capsule-render.vercel.app/api?type=waving&color=0:0A1A2E,50:1E3A5F,100:00BFFF&height=200&section=header&text=Class%20Training&fontSize=52&fontColor=ffffff&fontAlignY=38&desc=Systems%20Programming%20%7C%20C%20%7C%20C%2B%2B%20%7C%20TCP%2FIP%20Networking&descAlignY=58&descSize=18&animation=fadeIn" alt="Class Training Banner" width="100%"/>

</div>

<div align="center">

[![Language](https://img.shields.io/badge/Language-C%20%2F%20C%2B%2B-blue?style=for-the-badge&logo=c&logoColor=white)](https://en.cppreference.com/)
[![Networking](https://img.shields.io/badge/Networking-TCP%2FIP-32CD32?style=for-the-badge&logo=cisco&logoColor=white)](03_TCP_IP/README.md)
[![Standard](https://img.shields.io/badge/C%2B%2B-14%20%7C%2017%20%7C%2020-FF8C00?style=for-the-badge&logo=cplusplus&logoColor=white)](02_ProgrammingInCPP/Version/README.md)
[![Topics](https://img.shields.io/badge/Topics-50%2B-6A5ACD?style=for-the-badge&logo=bookstack&logoColor=white)](#-curriculum-overview)

</div>

---

## 🎯 About This Repository

> A **structured, hands-on curriculum** for mastering systems programming — from C fundamentals and modern C++ to POSIX socket networking. Each module pairs theory with working code examples, interview prep, and deep-dive explorations.

---

## 🗂️ Repository Structure

```
00_Class_Training/
├── 01_ProgrammingInC/          # C language fundamentals
│   ├── Class/                  # Topic-based lessons with exercises
│   ├── CodeOptimization/       # Bit ops, string algorithms, reverse algos
│   ├── Explore/                # Linked list variants & advanced data structures
│   ├── Practice/               # Assignment-style practice programs
│   └── Topics/                 # Function pointers, macros, memory layout
│
├── 02_ProgrammingInCPP/        # Modern C++ (C++14/17/20)
│   ├── Class/                  # OOP, templates, virtual functions, namespaces
│   ├── Explore/                # Advanced feature exploration
│   ├── InDepth/                # Deep-dives into complex concepts
│   ├── Interviews/             # Interview problems and solutions
│   ├── Practice/               # 19 structured modules (basics → STL → patterns)
│   └── Version/                # C++14 / C++17 / C++20 feature showcase
│
├── 03_TCP_IP/                  # POSIX socket programming
│   └── client_server/          # TCP, UDP, TFTP, multi-client, database servers
│
└── profile/                    # GitHub profile & portfolio
```

---

## 📚 Curriculum Overview

### 🔵 [Programming in C](01_ProgrammingInC/README.md)

> Foundation-first approach to the C language — every concept is reinforced with real code.

| Module | Topics Covered |
|:---|:---|
| **[Class](01_ProgrammingInC/Class/README.md)** | Arrays, pointers, strings, files, bitwise ops, linked lists, recursion, type casting, control flow, patterns |
| **[Code Optimization](01_ProgrammingInC/CodeOptimization/README.md)** | Counting set bits, reversing bits, string operations, ADC register reads |
| **[Explore](01_ProgrammingInC/Explore/README.md)** | Singly/doubly linked lists, circular lists, advanced data structures |
| **[Practice](01_ProgrammingInC/Practice/README.md)** | Problem-solving assignments — from basics to mini-projects |
| **[Topics](01_ProgrammingInC/Topics/README.md)** | Function pointers, conditional compilation (`#ifdef`), C memory model & code layout |

---

### 🟠 [Programming in C++](02_ProgrammingInCPP/README.md)

> Modern C++ across all major standards — OOP to concurrency to design patterns.

| Module | Topics Covered |
|:---|:---|
| **[Class](02_ProgrammingInCPP/Class/README.md)** | Classes, inheritance, virtual functions, operator overloading, templates, namespaces, static, mutable |
| **[Practice](02_ProgrammingInCPP/Practice/README.md)** | 19 modules: Basics → Constructors → Operator Overloading → Virtual → Threading → Smart Pointers → STL → Design Patterns → Templates → Strings |
| **[Version](02_ProgrammingInCPP/Version/README.md)** | C++14 features, C++17 additions, C++20 concepts & ranges |
| **[InDepth](02_ProgrammingInCPP/InDepth/README.md)** | Advanced internals and nuanced language behavior |
| **[Interviews](02_ProgrammingInCPP/Interviews/README.md)** | Curated interview problems with idiomatic C++ solutions |
| **[Explore](02_ProgrammingInCPP/Explore/README.md)** | Experimental programs exploring edge cases and new features |

<details>
<summary><b>📋 Practice Module Breakdown (click to expand)</b></summary>

| # | Module |
|:---:|:---|
| 01 | Basics |
| 02 | Default Members |
| 03 | Constructors |
| 04 | Operator Overloading |
| 05 | Virtual Functions |
| 06 | Threading |
| 07 | Data Structures |
| 08 | Lambda Expressions |
| 09 | Smart Pointers |
| 10 | STL |
| 11 | Design Patterns |
| 12 | Templates |
| 13 | Strings |
| 14 | Default Arguments |
| 15 | Mutable Keyword |
| 16 | Interview Prep |
| 17 | Extra Utilities |
| 18 | Build Outputs |
| 19 | Strings (Advanced) |

</details>

---

### 🌐 [TCP/IP Networking](03_TCP_IP/README.md)

> Hands-on POSIX socket programming — build real clients and servers from scratch.

| Module | What You'll Build |
|:---|:---|
| **[client_server](03_TCP_IP/client_server/README.md)** | TCP client & server, UDP client & server, TFTP implementation, multi-client `select()`-based server, database server, command-line socket tools |

**Key concepts:** `socket()` · `bind()` · `listen()` · `accept()` · `connect()` · `select()` · TCP vs UDP · TFTP protocol · concurrent server design

---

## 🛠️ Tech Stack

<div align="center">

| Technology | Usage |
|:---:|:---|
| ![C](https://img.shields.io/badge/C-A8B9CC?style=flat-square&logo=c&logoColor=black) | Core systems programming language |
| ![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat-square&logo=cplusplus&logoColor=white) | Object-oriented & modern systems programming |
| ![GCC](https://img.shields.io/badge/GCC-A42E2B?style=flat-square&logo=gnu&logoColor=white) | Compiler toolchain |
| ![Linux](https://img.shields.io/badge/Linux-FCC624?style=flat-square&logo=linux&logoColor=black) | POSIX APIs, socket programming |
| ![Make](https://img.shields.io/badge/Make-6D00CC?style=flat-square&logo=cmake&logoColor=white) | Build automation |

</div>

---

## 🚀 Quick Start

```bash
# Clone the repository
git clone https://github.com/nilprajapati97/00_Class_Training.git
cd 00_Class_Training

# Compile any C example
gcc -Wall -o output 01_ProgrammingInC/Class/<topic>/<file>.c

# Compile any C++ example
g++ -std=c++17 -Wall -o output 02_ProgrammingInCPP/Practice/<module>/<file>.cpp

# Build and run a TCP server example
gcc -o server 03_TCP_IP/client_server/server.c
gcc -o client 03_TCP_IP/client_server/client.c
./server &
./client
```

---

## 📖 Learning Path

```
Beginner                    Intermediate                  Advanced
────────────────────────────────────────────────────────────────────
C Basics          →    Pointers & Memory     →    Linked Lists & Recursion
                              │
                              ▼
C++ OOP           →    Templates & STL       →    Threading & Smart Pointers
                              │
                              ▼
POSIX Sockets     →    TCP/UDP Servers       →    Multi-client & Protocol Impl.
```

---

<div align="center">

<sub>📍 <code>Workspace / Classes</code> &nbsp;·&nbsp; Built for learners who love <b>systems programming</b></sub>

</div>
