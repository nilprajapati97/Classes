Here is a **C program** that does exactly what you asked:

✅ Print linked list
✅ Count total nodes
✅ Reverse **last N nodes**

---

## 📌 C Code: Reverse Last N Nodes

```c id="reverse_last_n"
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Insert at end
struct Node* insert(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
        return newNode;

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Display list
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Count nodes
int countNodes(struct Node* head) {
    int count = 0;
    struct Node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Reverse entire list (helper)
struct Node* reverse(struct Node* head) {
    struct Node *prev = NULL, *curr = head, *next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// Reverse last N nodes
struct Node* reverseLastN(struct Node* head, int n) {
    int len = countNodes(head);

    if (n <= 0 || n > len)
        return head;

    // Find (len - n)th node
    int split = len - n;
    struct Node* temp = head;
    struct Node* prev = NULL;

    for (int i = 0; i < split; i++) {
        prev = temp;
        temp = temp->next;
    }

    // temp = start of last N nodes
    struct Node* lastPart = reverse(temp);

    // Connect first part with reversed last part
    if (prev != NULL)
        prev->next = lastPart;
    else
        head = lastPart;

    return head;
}

// Main
int main() {
    struct Node* head = NULL;

    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    head = insert(head, 40);
    head = insert(head, 50);

    printf("Original List:\n");
    display(head);

    int total = countNodes(head);
    printf("Total Nodes: %d\n", total);

    int n;
    printf("Enter number of nodes to reverse from last: ");
    scanf("%d", &n);

    head = reverseLastN(head, n);

    printf("After Reversing Last %d Nodes:\n", n);
    display(head);

    return 0;
}
```

---

## 🧠 Example Output:

```
Original List:
10 -> 20 -> 30 -> 40 -> 50 -> NULL
Total Nodes: 5
Enter number of nodes to reverse from last: 3

After Reversing Last 3 Nodes:
10 -> 20 -> 50 -> 40 -> 30 -> NULL
```

---

Great 👍 Let’s take **10 nodes** and clearly understand **reverse last N nodes** step-by-step.

---

# 📌 Example

**Linked List (10 nodes):**

```text
10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 70 -> 80 -> 90 -> 100 -> NULL
```

Let **N = 4**

👉 We need to reverse last 4 nodes:

```text
70 -> 80 -> 90 -> 100
```

---

# ✅ Step 1: Count nodes

Total nodes = **10**

Last N = **4**

👉 First part size:

```
10 - 4 = 6 nodes
```

---

# ✂️ Step 2: Split the list

### First Part (6 nodes):

```text
10 -> 20 -> 30 -> 40 -> 50 -> 60 -> NULL
```

### Last N Part (4 nodes):

```text
70 -> 80 -> 90 -> 100 -> NULL
```

---

# 🔁 Step 3: Reverse last N nodes

Before reverse:

```text
70 -> 80 -> 90 -> 100 -> NULL
```

After reverse:

```text
100 -> 90 -> 80 -> 70 -> NULL
```

---

# 🔗 Step 4: Join both parts

Connect:

```text
60 -> 100
```

---

# 🎯 Final Answer

```text
10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 100 -> 90 -> 80 -> 70 -> NULL
```

---

# 🔍 Detailed Pointer Movement (Important)

We reverse this part:

```text
70 -> 80 -> 90 -> 100 -> NULL
```

---

## Iteration 1

```text
prev = NULL
curr = 70
next = 80
```

After reverse:

```text
70 -> NULL
```

---

## Iteration 2

```text
prev = 70
curr = 80
next = 90
```

After reverse:

```text
80 -> 70 -> NULL
```

---

## Iteration 3

```text
prev = 80
curr = 90
next = 100
```

After reverse:

```text
90 -> 80 -> 70 -> NULL
```

---

## Iteration 4

```text
prev = 90
curr = 100
next = NULL
```

After reverse:

```text
100 -> 90 -> 80 -> 70 -> NULL
```

---

# 📊 Full Visualization

## Before:

```text
10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 70 -> 80 -> 90 -> 100 -> NULL
```

## Split:

```text
First: 10 -> 20 -> 30 -> 40 -> 50 -> 60 -> NULL
Last : 70 -> 80 -> 90 -> 100 -> NULL
```

## Reverse last part:

```text
100 -> 90 -> 80 -> 70 -> NULL
```

## Final:

```text
10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 100 -> 90 -> 80 -> 70 -> NULL
```

---

# 🧠 Easy Exam Trick

👉 Just remember:

**Total nodes = T**

**Reverse last N → split at (T - N)**

---

# ⚡ Shortcut Formula

```text
Split position = Total Nodes - N
```

---

If you want, I can next show:

* 🔥 Reverse first N nodes (with 10 nodes)
* 🔥 Reverse in groups of K (very important)
* 🔥 Dry run with code line-by-line


* Draw step-by-step diagram (very useful 🔥)
* Give shorter exam version
* Combine both “reverse first N” + “last N” in one program 👍
