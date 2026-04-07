void reverseList(struct Node** head) {
    struct Node *prev = NULL, *current = *head, *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}
// 10 20 30 40 50 60 70 80 
while (current != NULL) {
    next = current->next;        // 1️⃣ Save next node
    current->next = prev;        // 2️⃣ Reverse current node’s pointer
    prev = current;              // 3️⃣ Move prev forward
    current = next;              // 4️⃣ Move current forward
}


// 10 20 30 40 50 60 70
🔄 Iteration 1:
    next          = current->next → next = 20
    current->next = prev          → 10->next = NULL
    prev          = current       → prev = 10
    current       = next          → current = 20

🔄 Iteration 2:
    next = current->next → next = 30
    current->next = prev → 20->next = 10
    Now: 20 -> 10 -> NULL
    prev = current → prev = 20
    current = next → current = 30

🔄 Iteration 3:
    next = current->next → next = NULL
    current->next = prev → 30->next = 20
    Now: 30 -> 20 -> 10 -> NULL
    prev = current → prev = 30
    current = next → current = NULL

✅ Final Step:
    *head = prev;
    The loop ends when current == NULL.

prev now points to the new head (30), so we update *head to point to it.

🎯 Final Result:
===========================================
Original list:
10 → 20 → 30 → NULL
Reversed list:
30 → 20 → 10 → NULL

