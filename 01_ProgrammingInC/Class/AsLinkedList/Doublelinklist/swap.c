#include"header.h"
void swap_n(DLL *ptr)
{
	DLL *temp,*temp1,v;
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
		temp1->prev=temp->prev;
		temp->next=v.next;
		temp->prev=v.prev;
	}
	else
		printf("Please enter a valid node number\n");
}

void swap_n_1(DLL **ptr)
{
	DLL *temp,*temp1,*t;
	int c,i,k;

		printf("Enter the number of nodes you want to swap\n");
		scanf("%d",&k);

	c=count(*ptr);
	if(k<=c)
	{
		temp=*ptr;
		for(i=0;i<k-1;i++)
			temp=temp->next;
		
		temp1=*ptr;
		for(i=0;i<c-k;i++)
			temp1=temp1->next;
		if(temp>temp1)
		{
			t=temp1;
			temp1=temp;
			temp=t;
		}

		//Swap the data
		if(temp->prev)
			temp->prev->next=temp1;
		else
			*ptr=temp1;

			temp1->prev->next=temp;
			temp->next->prev=temp1;

		if(temp1->next)
			temp1->next->prev=temp;

			t=temp->next;
			temp->next=temp1->next;
			temp1->next=t;


			t=temp->prev;
			temp->prev=temp1->prev;
			temp1->prev=t;
		
	}
	else
		printf("Please enter a valid node number\n");

}


void swap_adjacent(DLL *ptr)
{
	DLL *temp,*temp1,v;
	int c,i;

	c=count(ptr);

	temp=temp1=ptr;
	printf("THe swap function is called %d\n",c);

	for(i=0;i<=(c/2)-1;i++)
	{
		temp=temp->next;

		//Swap nodes logic
		v=*temp;
		*temp=*temp1;
		*temp1=v;

		//Reverser link logic
		temp1->next=temp->next;
		temp1->prev=temp->prev;
		temp->next=v.next;
		temp->prev=v.prev;
		
		temp1=temp1->next;
		//Increment to one extra node
		temp1=temp1->next;
		temp=temp->next;
	}
}
