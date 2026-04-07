#include"header.h"
void merge(DLL **p,DLL **q)
{
	DLL *t1,*t2,*temp,*temp1;
	int c1,c2,m,i;

	temp=*p;
	temp1=*q;

	//Find the count for the number of link list nodes
	c1=count(temp);
	c2=count(temp1);
	
	m=c1;
		if(c1>c2)
			m=c2;
	for(i=0;i<m;i++)
	{
		t1=temp;
		t2=temp1;
		temp=temp->next;
		temp1=temp1->next;

		t2->next=t1->next;
		t2->prev=t1;
		t1->next=t2;

		if(t1->next)
			t1->next->prev=t2;
	}
	if(m==c1)
	{
		t2->next=temp1;
	}
	*q=0;
}
