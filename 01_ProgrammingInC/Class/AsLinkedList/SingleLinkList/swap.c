#include"header.h"
void swap_n(ST *ptr)
{
	ST *temp,*temp1,v;
	int c,i,k;
	
		printf("Enter the number of nodes you want to swap\n");
		scanf("%d",&k);

	c=count(ptr);
	if(k<=c)
	{	
		temp=ptr;
		for(i=0;i<k-1;i++)
			temp=temp->next;
		temp1=ptr;
		for(i=0;i<c-k;i++)
			temp1=temp1->next;
		//Swap the data
		v=*temp;
		*temp=*temp1;
		*temp1=v;
		temp1->next=temp->next;
		temp->next=v.next;
	}
	else
		printf("Please enter a valid node number\n");
}

void swap_adjacent(ST *ptr)
{
	ST *temp,*temp1,v;
	int c,i;

	c=count(ptr);

	temp=temp1=ptr;

	for(i=0;i<=(c/2)-1;i++)
	{
		temp=temp->next;

		//Swap nodes logic
		v=*temp;
		*temp=*temp1;
		*temp1=v;

		//Reverser link logic
		temp1->next=temp->next;
		temp->next=v.next;
		
		temp1=temp1->next;

		//Increment to one extra node
		temp1=temp1->next;
		temp=temp->next;
	}
}
