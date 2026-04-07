#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node
{
    int data;
    struct Node *next;
};

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
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        struct Node *temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
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
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void deletePos(struct Node **head, int pos)
{
    if (*head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = *head;

    // If head node itself needs to be deleted
    if (pos == 0)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    // Find the previous node of the node to be deleted
    for (int i = 0; temp != NULL && i < pos - 1; i++)
    {
        temp = temp->next;
    }

    // If position is more than the number of nodes
    if (temp == NULL || temp->next == NULL)
    {
        printf("Entered position is incorrect -: %d\n", pos);
        return;
    }

    // Node temp->next is the node to be deleted
    struct Node *nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;

    free(nodeToDelete);
}

// Function to delete first occurrence of key in linked list
void deleteByValue(struct Node **head, int key)
{
    struct Node *temp = *head;
    struct Node *prev = NULL;

    // If head node holds the key
    if (temp != NULL && temp->data == key)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    // Search for the key
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // If key not found
    if (temp == NULL)
    {
        printf("Value %d not found in list.\n", key);
        return;
    }
    else
    {
        // Unlink the node from the list
        prev->next = temp->next;
        free(temp);
    }
}

void deleteByValue_1(struct Node **head, int key)
{
    struct Node *temp = *head , *current= NULL ;
    while((temp)->next != NULL)
    {
        if((temp)->next->data ==key)
        { 
            current = (temp)->next;
            (temp)->next = current ->next;
            free(current);
//            return head;
        }
        temp = temp->next;
    }
}

// Function to delete the N-th node from end
int deleteFromEnd(struct Node **head, int n)
{
    struct Node *first = *head;
    struct Node *second = *head;
    // int ret = -1;
    //  Move first pointer n steps ahead
    for (int i = 0; i < n; i++)
    {
        if (first == NULL)
        {
            printf("Position %d from end is out of bounds.\n", n);
            return -1;
        }
        first = first->next;
    }

    // If first is NULL, we need to delete the head node
    if (first == NULL)
    {
        struct Node *temp = *head;
        *head = (*head)->next;
        free(temp);
        return 0;
    }

    // Move both pointers until first reaches the end
    while (first->next != NULL)
    {
        first = first->next;
        second = second->next;
    }

    // Delete second->next
    struct Node *temp = second->next;
    second->next = second->next->next;
    free(temp);
}

void deleteDuplicates(struct Node *head)
{
    struct Node * current = head;

    while(current != NULL)
    {
       struct Node * prev = current;
       struct Node * temp = current ->next;

        while(temp != NULL)
        {
            if(temp->data == current->data)
            {
                prev->next = temp->next;
                free(temp);
                temp= prev->next;
            }
            else
            {
                prev= temp;
                temp= temp->next;
            }
        }
    current = current ->next;
    }
}

void reverseList(struct Node** head)
{
    struct Node *prev= NULL , *current = *head, *next=NULL;

    while (current != NULL)
    {   
        next = current ->next;
        current-> next = prev;
        prev = current;
        current= next;
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



int main()
{
    struct Node *head = NULL;
    int choice;
    int data[] = {10, 30, 1, 50, 2, 6, 70, 80, 77, 2, 4, 30, 1, 6};
    int n = sizeof(data) / sizeof(data[0]);

    printf("data -: 10, 30, 1, 50, 2, 6, 70, 80,77,2,4,30,1,6\n");
    printf("Choose insertion method:\n");
    printf("1. Insert all at beginning\n");
    printf("2. Insert all at end\n");
    printf("3. Insert in sorted (ascending) order\n");
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
            insert_at_end(&head, data[i]);
        }
        else if (choice == 3)
        {
            insert_middle(&head, data[i]);
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

    //reverseUptoN(&head, 55);
    
    //reverseData(head);
    //reverseListRecursive(&head);
    deleteByValue_1(&head , 10);
    printList(head);
    return 0;
}
