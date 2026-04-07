#include"header.h"
void add_begin(DLL **ptr)
{
	DLL *temp;
		temp=malloc(sizeof(ST));
	temp->prev=temp->next=0;
	
	printf("Enter the rollno\n");
	scanf("%d",&temp->rollno);

	temp->next=*ptr;
	temp->prev=temp;
	*ptr=temp;
}

void add_end(DLL **ptr)
{
	DLL *temp,*temp1;

		temp=malloc(sizeof(ST));

	temp->prev=temp->next=0;

	printf("Enter the rollno\n");
	scanf("%d",&temp->rollno);

	if(*ptr==0)
	{
		*ptr=temp;
	}
	else
	{
		temp1=*ptr;
		while(temp1->next)
			temp1=temp1->next;
		temp->next=temp1->next;
		temp1->next=temp;
		temp->prev=temp1;
	}

}

void add_middle(DLL **ptr)
{
	
	DLL *temp,*temp1;
		temp=malloc(sizeof(DLL));

	temp->prev=temp->next=0;

	printf("Enter the rollno\n");
	scanf("%d",&temp->rollno);

	if(*ptr==0 || (*ptr)->rollno>temp->rollno)
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		temp1=*ptr;
		while(temp1)
		{
			if(temp1->next==0)
			{
				temp->next=temp1->next;
				temp1->next=temp;
				temp->prev=temp1;
				break;
			}
			if(temp1->next->rollno<temp->rollno)
			{
				temp->next=temp1->next;
				temp1->next=temp;
				temp->prev=temp1;
				break;
			}
			temp1=temp1->next;
		}
		
	}

}
