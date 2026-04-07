#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node
{
    int data;
    struct Node *next;
};


void insert_at_beginning(struct Node** head, int data);
void insert_middle(struct Node** head, int data); // Assume sorted insert
void insert_at_end(struct Node** head, int data);
void printList(struct Node* head);
void printReverse(struct Node* head);
void reverseData(struct Node* head);
void reverseList(struct Node** head);
void reverseUptoN(struct Node** head, int n);
void deleteAtPosition(struct Node** head, int pos);
//void deleteFromEnd(struct Node** head, int pos);
//void deleteDuplicates(struct Node** head);
void deleteAll(struct Node** head);
// Insert at beginning
void insert_at_beginning(struct Node **head, int new_data)
{
    struct Node *new_node = malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}

// Insert at end
void insert_at_end(struct Node **head, int new_data)
{
    struct Node *new_node = malloc(sizeof(struct Node));
    new_node->data = new_data;

    if (*head == NULL)
    {
        new_node->next = *head;
        *head = new_node;
    }
    else
    {
        struct Node *temp = *head;
        while (temp->next)
        {
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }
}

// Insert in ascending order
void insert_middle(struct Node **head, int new_data)
{
    struct Node *new_node = malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head == NULL || new_data < (*head)->data)
    {
        new_node->next = *head;
        *head = new_node;
    }
    else
    {
        struct Node *temp = *head;
        while (temp->next != NULL && temp->next->data < new_data)
        {
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }
}

// Print the linked list
void printList(struct Node *head)
{
    printf("List: ");
    if (head == NULL)
    {
        printf("Link List is empty..\n");
    }
    else
    {
        while (head)
        {
            printf("%d->", head->data);
            head = head->next;
        }
        printf("NULL\n");
    }
}
void printReverse(struct Node *head)
{
    printf("List: ");
    if (head == NULL)
    {
        printf("Link List is empty..\n");
    }
    else
    {
        while (head)
        {
            printf("%d->", head->data);
            head = head->next;
        }
        printf("NULL\n");
    }
}

void deleteAtPosition(struct Node **head, int pos)
{
}

void deleteAll(struct Node **head)
{
}

// Function to delete first occurrence of key in linked list
void deleteByValue(struct Node **head, int key)
{
}

// Function to delete the N-th node from end
int deleteFromEnd(struct Node **head, int n)
{
}

void deleteDuplicates(struct Node *head)
{
    struct Node *current = head, *prev = NULL, *last = NULL;

    while (current != NULL)
    {
        prev = current;
        last = current->next;
        while (last != NULL)
        {
            if (last->data == current->data)
            {
                prev->next = last->next;
                free(last);
                last = prev->next;
            }
            else
            {
                prev = last;
                last = last->next;
            }
        }
    current = current->next;
    }
}

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

void reverseUptoN(struct Node **head, int n)
{
}

void reverseData(struct Node *head)
{
}

int main()
{

/*
    struct Node *head = NULL;
    int choice;
    int data[] = {10, 30, 1, 50, 2, 6, 70, 80, 77, 2, 4, 30, 1, 6};
    int n = sizeof(data) / sizeof(data[0]);

    printf("data -: 10, 30, 1, 50, 2, 6, 70, 80,77,2,4,30,1,6\n");
    printf("Choose insertion method:\n");
    printf("1. Insert all at beginning\n");
    printf("2. Insert at middle (assending order)....\n");
    printf("3. Insert all at End...\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    for (int i = 0; i < n; i++)
    {
        if (choice == 1)
        {
            insert_at_beginning(&head, data[i]);
        }
        else if (choice == 2)
        {
            insert_middle(&head, data[i]);
        }
        else if (choice == 3)
        {
            insert_at_end(&head, data[i]);
        }
        else
        {
            printf("Invalid choice.\n");
            return 1;
        }
    }

    printf("\nOriginal List:\n");
    printf("====================================\n");
    printList(head);
    // deletePos(&head ,3);
    // printf("List after deleting  position -: %d:\n", 3);

    // Step [2]
    /*
        int valueToDelete = 30;
        deleteByValue(&head, valueToDelete);

        printf("List after deleting %d:\n", valueToDelete);
        printList(head);
    */

    /*
        int posFromEnd = 34;
        deleteFromEnd(&head, posFromEnd);
        printf("List after deleting %d-th node from end:\n", posFromEnd);
        printList(head);
    */
    /*
        deleteDuplicates(head);
        printf("\nList after removing duplicates:\n");
        printf("====================================\n");
        printList(head);
    */
    //reverseList(&head);

    // reverseUptoN(&head, 55);

    // reverseData(head);
//    deleteDuplicates(head);
//    printList(head);
//    return 0;

    struct Node* head = NULL;
    int choice, subchoice, val, pos;

    int data[] = {10, 30, 1, 50, 2, 6, 70, 80, 77, 2, 4, 30, 1, 6};
    int n = sizeof(data) / sizeof(data[0]);

    while (1) {
        printf("\n========= MENU =========\n");
        printf("1. Add\n");
        printf("2. Print\n");
        printf("3. Reverse\n");
        printf("4. Delete\n");
        printf("5. Exit\n");
        printf("========================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: // Add
            printf("\nAdding:\n");
            printf("1. Add at beginning\n");
            printf("2. Add in middle (sorted insert)\n");
            printf("3. Add at end\n");
            printf("Enter option: ");
            scanf("%d", &subchoice);

            for (int i = 0; i < n; i++) {
                if (subchoice == 1)
                    insert_at_beginning(&head, data[i]);
                else if (subchoice == 2)
                    insert_middle(&head, data[i]);
                else if (subchoice == 3)
                    insert_at_end(&head, data[i]);
                else
                    printf("Invalid add option.\n");
            }
            break;

        case 2: // Print
            printf("\nPrint:\n");
            printf("1. Print list\n");
            printf("2. Print reverse\n");
            printf("Enter option: ");
            scanf("%d", &subchoice);
            if (subchoice == 1)
                printList(head);
            else if (subchoice == 2)
                printReverse(head);
            else
                printf("Invalid print option.\n");
            break;

        case 3: // Reverse
            printf("\nReverse:\n");
            printf("1. Reverse data only\n");
            printf("2. Reverse entire link\n");
            printf("3. Reverse up to Nth node\n");
            printf("Enter option: ");
            scanf("%d", &subchoice);
            if (subchoice == 1)
                reverseData(head);
            else if (subchoice == 2)
                reverseList(&head);
            else if (subchoice == 3) {
                printf("Enter N: ");
                scanf("%d", &pos);
                reverseUptoN(&head, pos);
            }
            else
                printf("Invalid reverse option.\n");
            break;

        case 4: // Delete
            printf("\nDelete:\n");
            printf("1. Delete at position\n");
            printf("2. Delete from end (Nth last node)\n");
            printf("3. Delete duplicates\n");
            printf("4. Delete all\n");
            printf("Enter option: ");
            scanf("%d", &subchoice);
            if (subchoice == 1) {
                printf("Enter position: ");
                scanf("%d", &pos);
                deleteAtPosition(&head, pos);
            }
            else if (subchoice == 2) {
                printf("Enter position from end: ");
                scanf("%d", &pos);
                deleteFromEnd(&head, pos);
            }
            else if (subchoice == 3)
                deleteDuplicates(head);
            else if (subchoice == 4)
                deleteAll(&head);
            else
                printf("Invalid delete option.\n");
            break;

        case 5:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }
}
