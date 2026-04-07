#include"header.h"
void add_begin(ST **ptr)
{
	ST *temp;
		temp=malloc(sizeof(ST));

	printf("Enter the rollno\n");
	scanf("%d",&temp->rollno);
	printf("Enter the name\n");
	scanf("%s",temp->name);
	printf("Enter the marks\n");
	scanf("%f",&temp->marks);

	temp->next=*ptr;
	*ptr=temp;
}

void add_end(ST **ptr)
{
	ST *temp,*temp1;
		temp=malloc(sizeof(ST));

	printf("Enter the rollno\n");
	scanf("%d",&temp->rollno);
	printf("Enter the name\n");
	scanf("%s",temp->name);
	printf("Enter the marks\n");
	scanf("%f",&temp->marks);

	if(*ptr==0)
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		temp1=*ptr;
		while(temp1->next)
			temp1=temp1->next;
		temp->next=temp1->next;
		temp1->next=temp;
	}

}

void add_middle(ST **ptr)
{
	
	ST *temp,*temp1;
		temp=malloc(sizeof(ST));

	printf("Enter the rollno\n");
	scanf("%d",&temp->rollno);
	printf("Enter the name\n");
	scanf("%s",temp->name);
	printf("Enter the marks\n");
	scanf("%f",&temp->marks);

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
				break;
			}
			if(temp1->next->rollno<temp->rollno)
			{
				temp->next=temp1->next;
				temp1->next=temp;
				break;
			}
			temp1=temp1->next;
		}
		
	}

}
