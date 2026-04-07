Got it 👍
Your code has multiple issues:

* Wrong `malloc` usage (`sizeof st` instead of `sizeof(struct st)`)
* Wrong pointer handling in `add()`
* Two conflicting `my_delete()` definitions
* Typo: `struct *hptr=0;` should be `struct st *hptr=NULL;`
* `void_print()` is undefined
* Wrong logic in middle-node deletion

Here’s a **fixed and working version** that:

1. Adds nodes to the list
2. Prints the list
3. Deletes the **middle node** using slow/fast pointer logic

```c
#include <stdio.h>
#include <stdlib.h>

struct st {
    int no;
    struct st *next;
};

// Add node at beginning
void add(struct st **p, int val) {
    struct st *ptr = malloc(sizeof(struct st));
    if (!ptr) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    ptr->no = val;
    ptr->next = *p;
    *p = ptr;
}

// Print linked list
void print_list(struct st *p) {
    while (p) {
        printf("%d ", p->no);
        p = p->next;
    }
    printf("\n");
}

// Delete middle node
void delete_middle(struct st **head) {
    if (*head == NULL || (*head)->next == NULL) {
        printf("Not enough nodes to delete middle.\n");
        return;
    }

    struct st *slow = *head, *fast = *head, *prev = NULL;

    // Move fast by 2 and slow by 1
    while (fast && fast->next) {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    // Now slow points to middle
    if (prev) {
        prev->next = slow->next;
        free(slow);
    }
}

int main() {
    struct st *hptr = NULL;

    // Insert nodes: 10,20,30,40,50,60
    add(&hptr, 60);
    add(&hptr, 50);
    add(&hptr, 40);
    add(&hptr, 30);
    add(&hptr, 20);
    add(&hptr, 10);

    printf("Before deleting middle:\n");
    print_list(hptr);

    delete_middle(&hptr);

    printf("After deleting middle:\n");
    print_list(hptr);

    return 0;
}
```

### ✅ Output:

```
Before deleting middle:
10 20 30 40 50 60 
After deleting middle:
10 20 30 50 60 
```

👉 Here, node `40` (middle of 6 nodes) is deleted.
If odd nodes (say 5), node `30` will be deleted.

---

Do you also want me to extend this code so it **deletes middle repeatedly until only 1 node is left** (like shrinking list step by step)?
