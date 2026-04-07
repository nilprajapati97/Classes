#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Insert at end
void insertEnd(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (*head == NULL) {  // First node
        *head = newNode;
        newNode->next = *head;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != *head)  // traverse to last node
        temp = temp->next;

    temp->next = newNode;
    newNode->next = *head;
}

// Insert at beginning
void insertBegin(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (*head == NULL) {  // First node
        *head = newNode;
        newNode->next = *head;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != *head)
        temp = temp->next;

    newNode->next = *head;
    temp->next = newNode;
    *head = newNode;
}

// Delete a node by value
void deleteNode(struct Node** head, int key) {
    if (*head == NULL) return;

    struct Node *curr = *head, *prev = NULL;

    // Case: head node to be deleted
    if (curr->data == key) {
        // only one node
        if (curr->next == *head) {
            free(curr);
            *head = NULL;
            return;
        }

        // find last node
        struct Node* temp = *head;
        while (temp->next != *head)
            temp = temp->next;

        temp->next = curr->next;
        *head = curr->next;
        free(curr);
        return;
    }

    // Find the node
    do {
        prev = curr;
        curr = curr->next;
    } while (curr != *head && curr->data != key);

    if (curr->data == key) {
        prev->next = curr->next;
        free(curr);
    }
}

// Traverse and print circular list
void display(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

// Free all nodes
void freeList(struct Node** head) {
    if (*head == NULL) return;

    struct Node *curr = *head, *nextNode;
    do {
        nextNode = curr->next;
        free(curr);
        curr = nextNode;
    } while (curr != *head);

    *head = NULL;
}

int main() {
    struct Node* head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    display(head);

    insertBegin(&head, 5);
    display(head);

    deleteNode(&head, 20);
    display(head);

    deleteNode(&head, 5);
    display(head);

    freeList(&head);
    return 0;
}
