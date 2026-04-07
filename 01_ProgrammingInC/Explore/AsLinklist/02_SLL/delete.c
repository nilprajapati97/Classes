#include "header.h"

void deletePos(struct Node **head, int pos)
{
    printf("\nEntering deletePos function\n");

    printf("====================================\n");

    struct Node * current = *head;
    struct Node * prev = current;
    struct Node * temp = current;

    if(pos < 1)
    {
        printf("Invalid position, position should be greater than 0...!\n");
        return ;
    }
    else if(pos == 1)
    {
        if(current == NULL)
        {
            printf("List is empty, nothing to delete...!\n");
            return ;
        }
        else
        {
            *head = current->next;
            free(current);
            printf("Node at position %d deleted successfully.\n", pos);
            return ;
        }
    }
    else
    {
        for(int i = 1; i < pos; i++)
        {
            if(current == NULL)
            {
                printf("Position %d is out of bounds, nothing to delete...!\n", pos);
                return ;
            }
            prev = current;
            current = current->next;
        }
    }

    if(current == NULL)
    {
        printf("Position %d is out of bounds, nothing to delete...!\n", pos);
        return ;
    }

    prev->next = current->next;
    free(current);
    printf("Node at position %d deleted successfully.\n", pos);
}

void deleteAll(struct Node **head)
{
    printf("\nEntering deleteAll function\n");

    printf("====================================\n");

    // Implement delete all here

    struct Node * current = *head;
    struct Node * prev = current;
    struct Node * temp = current;

    while(current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp); 
    }
    *head = NULL;
    
}

// Delete first occurrence by key
void deleteByValue(struct Node **head, int key)
{
    printf("\nEntering deleteByValue function\n");

    printf("====================================\n");

    struct Node *current = *head;
    struct Node *prev = NULL;

    if (current == NULL) {
        printf("List is empty. Can't delete %d\n", key);
        return;
    }

    if (current->data == key) {
        *head = current->next;
        free(current);
        printf("%d deleted from the list\n", key);
        return;
    }

    while (current != NULL && current->data != key) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("%d not found in the list\n", key);
    } else {
        prev->next = current->next;
        free(current);
        printf("%d deleted from the list\n", key);
    }
}

void deleteAllByValue(struct Node **head, int key)
{
    printf("\nEntering deleteAllByValue function\n");

    printf("====================================\n");

    struct Node *current = *head;
    struct Node *prev = NULL;

    while (current != NULL) {
        if (current->data == key) {
            struct Node *temp = current;
            if (prev == NULL) {
                *head = current->next;
                current = *head;
            } else {
                prev->next = current->next;
                current = current->next;
            }
            free(temp);
            printf("%d deleted from the list\n", key);
        } else {
            prev = current;
            current = current->next;
        }
    }
}

int deleteFromEnd(struct Node **head, int n)
{
    printf("\nEntering deleteFromEnd function\n");

    printf("====================================\n");

    // Implement delete from end here
    return 0;
}

void deleteDuplicates(struct Node *head)
{
    printf("\nEntering deleteDuplicates function\n");

    printf("====================================\n");

    struct Node *current = head;

    while (current != NULL) {
        struct Node *prev = current;
        struct Node *temp = current->next;

        while (temp != NULL) {
            if (current->data == temp->data) {
                prev->next = temp->next;
                free(temp);
                temp = prev->next;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
        current = current->next;
    }
}


void deleteMenu(struct Node **head) {
    int choice, pos, value, posFromEnd;

    do {
        printf("\n********** Deleting Operations Menu **********\n");

        printf("1. Delete by Position\n");
        printf("2. Delete by Value\n");
        printf("3. Delete by Position From End\n");
        printf("4. Delete All Duplicates\n");
        printf("5. Delete All\n"); // Optional
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                deletePos(head, pos);
                printf("List after delete by position %d:\n", pos);
                printList(*head);
                break;

            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteByValue(head, value);
                printf("List after delete by value %d:\n", value);
                printList(*head);
                break;

            case 3:
                printf("Enter position from the end to delete: ");
                scanf("%d", &posFromEnd);
                deleteFromEnd(head, posFromEnd);
                printf("List after delete %dth from the end:\n", posFromEnd);
                printList(*head);
                break;

            case 4:
                deleteDuplicates(*head);
                printf("List after removing duplicates:\n");
                printList(*head);
                break;

            case 5:
                deleteAll(head);
                printf("All nodes have been deleted. List is now empty.\n");

                printList(*head);
                break;

            case 0:
                printf("Exiting delete menu\n");

                break;

            default:
                printf("Invalid choice. Please try again.\n");

                break;
        }

    } while (choice != 0);
}
