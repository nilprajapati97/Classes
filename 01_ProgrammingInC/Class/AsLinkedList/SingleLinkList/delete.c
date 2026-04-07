#include"header.h"
#include<string.h>
void delete_node(ST **ptr)
{
	ST *temp,v,*temp1;
	int op;

abc:	printf("Select the signature with respect to which you want to delete the node \n1) Roll Number\n2) Name\n3)Marks\n");
	scanf("%d",&op);	
	switch(op)
	{
		case 1:
			printf("Enter the Roll Number\n");
			scanf("%d",&v.rollno);
			break;
		case 2:
			printf("Enter the Name\n");
			scanf("%s",v.name);
			break;
		case 3:
			printf("Enter the Marks\n");
			scanf("%f",&v.marks);
			break;
		default:
			printf("Please enter a valid choice\n");
			goto abc;

	}
		
	temp=*ptr;
	if(( op==1 && temp->rollno==v.rollno )||( op==2 && !strcmp(temp->name,v.name))||( op==3 && temp->marks==v.marks))
	{
		*ptr=temp->next;
		free(temp);
	}
	else
	{
		temp1=temp;
		temp=temp->next;
		
		while(temp)
		{
			if(( op==1 && temp->rollno==v.rollno )||( op==2 && !strcmp(temp->name,v.name))||( op==3 && temp->marks==v.marks))
			{
				temp1->next=temp->next;
				free(temp);
				break;
			}
				temp1=temp;
				temp=temp->next;
		}
		if(temp==0)
		{
			printf("The given signature is not present in the linked list\n");	
		}
	}
}


void delete_traverse(ST **ptr)
{
	ST *temp,**p;
	int c=0,k;

abc:		printf("Enter the node you want to delete\n");
		scanf("%d",&k);
	if(k<1)
	{
			printf("Please enter a valid value for k \n");
			goto abc;
	}

	temp=*ptr;

	//Allocate the first memory for the basic pointer
	p=malloc(sizeof(ST *));
	p[c]=temp;
	c++;
	temp=temp->next;
	
	while(temp)	
	{
		p=realloc(p,c+1);	 
		p[c]=temp;
		temp=temp->next;
		c++;
	}

	if(k>c)
	{
		printf("The entered value of deleteion node is invalid\n");
		
	}
	else
	{
		if((c-k)==0)	
		{
			*ptr=p[c-k]->next;
			free(p[c-k]);
		}
		else
		{
			p[c-k-1]->next=p[c-k]->next;
			free(p[c-k]);
		}
	}
	
}

void delete_traverse_easy(ST **ptr)
{
	ST *p,*q,*temp;
	int c=0,k,i;
	p=q=*ptr;
	
abc:		printf("Enter the node you want to delete\n");
		scanf("%d",&k);
		if(k<1)
		{
			printf("Invalid value of k is selected\n");
			goto abc;
		}
	
	for(i=0;i<k && q->next ;i++)
	{
		c++;
		q=q->next;
	}
	if(q->next==0)
	{
		c++;
		if((c-k)==0)
		{
			*ptr=p->next;
			free(p);
		}
		else
		{
			printf("The entered value of k is greater than count\n");
		}
	}
	else
	{
		while(q)
		{
			q=q->next;
			temp=p;
			p=p->next;
		}
		temp->next=p->next;
		free(p);
	}
	
}


void delete_duplicate_sort(ST *ptr)
{
	ST *temp,*temp1;
	temp=ptr;
	while(temp)
	{
		temp1=temp->next;
		while(temp1)
		{
			if(temp->rollno == temp1->rollno)
			{
				temp->next=temp1->next;
				free(temp1);
			}
			temp1=temp1->next;
		}
		temp=temp->next;
	}

}

void delete_duplicate(ST *ptr)
{
	ST *p,*q,*r;
	p=ptr;
	while(p)
	{
		r=p;
		q=p->next;
		while(q)
		{
			
			if(p->rollno == q->rollno)
			{
				r->next=q->next;
				q=q->next;
				free(q);
				continue;
			}
			r=q;
			q=q->next;
		}
		p=p->next;
	}
}

void delete_data_even(ST **ptr)
{
	ST *temp,*temp1,*temp2;
	temp=temp1=*ptr;
	
	while(temp)
	{
		if((*ptr)->rollno%2==0)
		{
			temp2=temp;
			*ptr=temp->next;
			temp=temp->next;
			free(temp2);
		}
		else if(temp->rollno%2==0)
		{
			temp2=temp;
			temp=temp->next;
			temp1->next=temp;
			free(temp2);
		}
		else
		{
			temp1=temp;
			temp=temp->next;
		}
	}

}




















