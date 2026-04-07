#include"header.h"
#include<string.h>
void delete_node(DLL **ptr)
{
	DLL *temp,v,*temp1;
	
	printf("Enter the Roll Number\n");
	scanf("%d",&v.rollno);
	

	temp=*ptr;
	
	while(temp)
	{
		if(temp->rollno==v.rollno)
		{	
			if(temp==*ptr)
				*ptr=temp->next;
			else
				temp->prev->next=temp->next;
			if(temp->next)
				temp->next->prev=temp->prev;

			free(temp);
			break;
		}
		temp=temp->next;
	}	
	if(temp==0)
	{
		printf("The given signature is not present in the linked list\n");	
	}
	
}

/*
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
*/
void delete_traverse_easy(DLL **ptr)
{
	DLL *p,*q;
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
			(*ptr)->prev=0;
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
			p=p->next;
		}
		
		
		p->prev->next=p->next;
		
		if(p->next)
			p->next->prev=p->prev;
		free(p);
	}
	
}


void delete_duplicate_sort(DLL *ptr)
{
	DLL *temp,*temp1,*temp2;
	temp=ptr;
	while(temp)
	{
		temp1=temp->next;
		while(temp1)
		{
			if(temp->rollno == temp1->rollno)
			{
				temp->next=temp1->next;
				if(temp1->next)
				temp1->next->prev=temp;
				free(temp1);	
			}
			temp1=temp1->next;
		}
		temp=temp->next;
	}

}
/*
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
*/
