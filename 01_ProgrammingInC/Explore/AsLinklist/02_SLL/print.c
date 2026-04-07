#include"header.h"
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