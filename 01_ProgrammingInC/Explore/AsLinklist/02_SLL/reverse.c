#include "header.h"
void reverseList(struct Node **head)
{
    struct Node *current = *head, *prev = NULL, *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

void reverseListRecursive(struct Node** head) {
    // Base case: empty list or end of list
    if (*head == NULL || (*head)->next == NULL) {
        return;
    }

    // Recursively reverse the rest of the list
    struct Node* rest = (*head)->next;
    reverseListRecursive(&rest);

    // Make the following node point to the current node
    (*head)->next->next = *head;
    (*head)->next = NULL;

    // Update head to point to the new head (last node in original list)
    *head = rest;
}

void reverseUptoN(struct Node** head, int n) {
    if (*head == NULL || n <= 1) return;

    // Count total number of nodes
    int total = 0;
    struct Node* temp = *head;
    while (temp != NULL) {
        total++;
        temp = temp->next;
    }

    // Check if n is valid
    if (n > total) {
        printf("Position %d is greater than number of nodes (%d)\n", n, total);
        return;
    }

    // Reverse first n nodes
    struct Node *prev = NULL, *current = *head, *next = NULL;
    struct Node *tail = *head;  // Will become the tail of reversed part
    int count = 0;

    while (current != NULL && count < n) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    tail->next = current;  // Connect the unreversed part
    *head = prev;          // Update the head
}

void reverseData(struct Node* head) {
    struct Node *first = head, *last, *temp = head;
    int count = 0, data, i, j;

    // Count total number of nodes
    while (temp) {
        count++;
        temp = temp->next;
    }

    // Swap data from start and end, moving inward
    for (i = 0; i < count / 2; i++) {
        last = head;
        for (j = 0; j < count - i - 1; j++) {
            last = last->next;
        }

        // Swap data between first and last
        data = first->data;
        first->data = last->data;
        last->data = data;

        first = first->next;
    }
}

void reverseMenu(struct Node **head)
{
    int choice, n;

    do {
        printf("\n********** Reverse Operations Menu **********\n");

        printf("1. Reverse List (Iterative)\n");

        printf("2. Reverse List (Recursive)\n");

        printf("3. Reverse First N Nodes\n");

        printf("4. Reverse List by Swapping Data\n");

        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                reverseList(head);
                printf("List reversed (iteratively).\n");

                printList(*head);
                break;

            case 2:
                reverseListRecursive(head);
                printf("List reversed (recursion).\n");

                printList(*head);
                break;

            case 3:
                printf("Enter N: ");
                scanf("%d", &n);
                reverseUptoN(head, n);
                printf("First %d nodes reversed.\n", n);

                printList(*head);
                break;

            case 4:
                reverseData(*head);
                printf("List reversed by swapping data.\n");

                printList(*head);
                break;

            case 0:
                printf("Exiting reverse menu\n");

                break;

            default:
                printf("Invalid choice\n");

                break;
        }

    } while (choice != 0);
}


