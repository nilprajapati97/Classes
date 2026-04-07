#include "header.h"
int node_count(struct Node *head)
{
    int count=0;
    while (head->next != NULL)
    {
        head = head->next;
        count++;
    }
    return count;
}