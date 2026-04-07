#include"header.h"


void reverse_data(ST *ptr)
{
	ST *temp,*temp1,v;
	int i,j,k,c;
	c=count(ptr);

	temp=ptr;
	for(i=0,j=c-1;i<j;i++,j--)
	{
		temp1=ptr;
		for(k=0;k<c-1-i;k++)
			temp1=temp1->next;
		v=*temp;
		*temp=*temp1;
		*temp1=v;
		
		temp1->next=temp->next;
		temp->next=v.next;
	}
	
}

void reverse_data_m(ST *ptr)
{
	ST *temp,*temp1,v;
	int i,j,k,c,m;
	c=count(ptr);

		printf("Enter the number of nodes whose data you want to reverse\n");
		scanf("%d",&m);
	if(m<=c)
	{
		for(i=0,j=m-1;i<j;i++,j--)
		{
			temp1=ptr;
		
			for(k=0;k<m-1-i;k++)
				temp1=temp1->next;
			v=*temp;
			*temp=*temp1;
			*temp1=v;
		
			temp1->next=temp->next;
			temp->next=v.next;
		}
	}
	else
		printf("Please enter a valid valur for M\n");
}


void reverse_links(ST **ptr)
{
	ST *p,*q,*r;
	p=*ptr;
	q=0;
	while(p)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	*ptr=q;
}

void reverse_links_m(ST **ptr)
{
	ST *p,*q,*r;
	int m,c,i;
		printf("Enter the number of nodes links you want to reverse\n");
		scanf("%d",&m);

	c=count(*ptr);
	
	if(m<=c)
	{
		p=*ptr;
		q=*ptr;
			for(i=0;i<m-1;i++)
				q=q->next;
		while(m)
		{
			r=q;
			q=p;
			p=p->next;
			q->next=r;
			m--;
		}
		*ptr=q;
		
	}
	else
		printf("The number of nodes entered is invalid\n");
}



void reverse_links_rec(ST **ptr,ST *p,ST *q)
{
	if(p->next==0)
	{
		*ptr=p;
		p->next=q;
	}
	else
	{
		reverse_links_rec(ptr,p->next,p);
		p->next=q;	
	}
}
