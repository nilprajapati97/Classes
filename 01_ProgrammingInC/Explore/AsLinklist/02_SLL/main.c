#include "header.h"
void insert_at_beginning(struct Node** head, int data);
void insert_middle(struct Node** head, int data); // Assume sorted insert
void insert_at_end(struct Node** head, int data);
void printList(struct Node* head);
void printReverse(struct Node* head);
void reverseData(struct Node* head);
void reverseList(struct Node** head);
void reverseUptoN(struct Node** head, int n);
void deleteAtPosition(struct Node** head, int pos);
void deleteAllByValue(struct Node **head, int key);
void deleteFromEnd(struct Node** head, int pos);
void deleteDuplicates(struct Node* head);
void deleteAll(struct Node** head);

void mainMenu(struct Node **head)
{
    int choice;

    do {
        printf("\n********** Main Menu **********\n");

        printf("1. Add elements to List\n");

        printf("2. Delete elements from List\n");

        printf("3. Reverse List\n");

        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMenu(head);
                break;

            case 2:
                deleteMenu(head);
                break;

            case 3:
                reverseMenu(head);
                break;

            case 0:
                printf("Exiting main menu\n");

                break;

            default:
                printf("Invalid choice\n");

                break;
        }

    } while (choice != 0);
}

int main()
{
    struct Node *head = NULL;

    printf("List values to be add -: 10, 30, 1, 50, 2, 6, 70, 80, 77, 4, 6, 4, 50, 1, 1, 10\n");

    mainMenu(&head);

    return 0;
}
