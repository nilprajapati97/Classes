#include"header.h"



void sort_data(ST *ptr)
{
	ST *temp,*temp1,v;
	int i,j,c;
	c=count(ptr);
	for(i=0;i<c-1;i++)
	{
		temp=ptr->next;
		temp1=ptr;
		for(j=0;j<c-1-i;j++)
		{
			if(temp->rollno < temp1->rollno)
			{
				v=*temp;
				*temp=*temp1;
				*temp1=v;

				temp1->next=temp->next;
				temp->next=v.next;
			}
			temp=temp->next;
			temp1=temp1->next;
		}
	}



}

