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

## 💡 Logic (easy to understand):

1. Count total nodes
2. Go to `(length - N)` position
3. Reverse last N nodes
4. Connect both parts

---

If you want, I can also:

* Draw step-by-step diagram (very useful 🔥)
* Give shorter exam version
* Combine both “reverse first N” + “last N” in one program 👍
