Here is a **C program** that:

✅ Prints the linked list
✅ Has a function to count nodes
✅ Reverses only the first *N nodes* (based on count you give)

---

## 📌 C Code: Print + Count + Reverse N Nodes

```c id="ll_reverse_n"
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

// Display linked list
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Count number of nodes
int countNodes(struct Node* head) {
    int count = 0;
    struct Node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
}

// Reverse first N nodes
struct Node* reverseN(struct Node* head, int n) {
    struct Node *prev = NULL, *curr = head, *next = NULL;
    int count = 0;

    while (curr != NULL && count < n) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // connect remaining list
    if (head != NULL)
        head->next = curr;

    return prev;
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
    printf("Enter number of nodes to reverse: ");
    scanf("%d", &n);

    head = reverseN(head, n);

    printf("After Reversing First %d Nodes:\n", n);
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
Enter number of nodes to reverse: 3
After Reversing First 3 Nodes:
30 -> 20 -> 10 -> 40 -> 50 -> NULL
```

---

## 💡 What this program does:

* `display()` → prints linked list
* `countNodes()` → counts total nodes
* `reverseN()` → reverses only first N nodes

---

If you want, I can also give:

* Reverse in groups of K nodes (important question 🔥)
* Menu-driven version for lab exams 👍
