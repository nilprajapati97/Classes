#include "header.h"


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
/*
void addSomeDuplicates(struct Node **head)
{
    // Insert duplicates for testing
    insert_at_end(head, 30);
    insert_at_end(head, 10);
    insert_at_end(head, 50);
    insert_at_end(head, 78);
    insert_at_end(head, 80);
    insert_at_end(head, 2);
    insert_at_end(head, 1);
}
*/

void addMenu(struct Node **head)
{
    int choice;

    int data[] = {10, 30, 1, 50, 2, 6, 70, 80, 77, 4 , 6,4,50, 1,1,10};  
    int n = sizeof(data) / sizeof(data[0]);

    printf("\n********** Add Operations Menu **********\n");

    printf("1. Insert All At Beginning\n");

    printf("2. Insert All At Middle (Ascending Order)\n");

    printf("3. Insert All At End\n");

    printf("0. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    for (int i = 0; i < n; i++) {
        if (choice == 1) {
            insert_at_beginning(head, data[i]);
        } 
        else if (choice == 2) {
            insert_middle(head, data[i]);
        } 
        else if (choice == 3) {
            insert_at_end(head, data[i]);
        } 
        else if (choice == 0) {
            break;
        } 
        else {
            printf("Invalid choice.\n");

            return;
        }
    }

    printf("\nList after adding elements:\n");

    printf("====================================\n");

    printList(*head);
}
