#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
}; 

void begin(struct Node** head, int new_data) {
    
    struct Node* new_node = malloc(sizeof(struct Node));
    
    new_node->data = new_data;
    
    new_node->next = *head;

    *head = new_node;
}

void end(struct Node** head, int new_data) {
    
    struct Node* new_node = malloc(sizeof(struct Node));
    struct Node* temp;
    new_node->data = new_data;

    if(*head == NULL)
    {
        new_node->next = *head;
        *head = new_node;
    }
    else
    {
        temp =*head;
        while(temp->next)
            temp=temp->next;
        new_node->next = temp->next;
        temp->next     = new_node;
    }
}

void middle(struct Node** head, int new_data) {
	struct Node *temp,*new_node;
		new_node = malloc(sizeof(struct Node));

	new_node->data = new_data;

	if(*head==NULL || (*head)->data > new_node->data)
	{
		new_node->next=*head;
		*head=new_node;
	}
	else
	{
		temp=*head;
		while(temp)
		{
			if(temp->next==0)
			{
				new_node->next = temp->next;
				temp->next=new_node;
				break;
			}
			if(temp->next->data > new_node->data)
			{
				new_node->next = temp->next;
				temp->next = new_node;
				break;
			}
			temp=temp->next;
		}
    }
}

// Print the linked list
void print_list(struct Node* head) {
    printf("List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    middle(&head, 10);
    middle(&head, 30);
    middle(&head, 01);
    middle(&head, 50);
    middle(&head, 2);
    middle(&head, 6);
    middle(&head, 70);
    middle(&head, 80);

    print_list(head); // Output: 10 -> 20 -> 30 -> NULL

    return 0;
}