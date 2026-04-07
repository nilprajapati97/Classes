/*#include"header.h"
#include<string.h>
void palindrome(ST *ptr)
{
	ST *temp,*temp1;
	int c,i,j,k;
	c=count(ptr);
	
	temp=ptr;
	if(ptr)
	{
		for(i=0,j=c-1;i<j;i++,j--)
		{
			temp1=ptr;
			for(k=0;k<c-1-i;k++)	//Point the temp1 to the last node
				temp1=temp1->next;

			if(check(temp,temp1))
				break;

			temp=temp->next;		
		}
		if(i>=j)
			printf("The given link list is palindrome\n");
		else
			printf("The link list is not a palindrome\n");
	}
	else
		printf("Please enter a linked list\n");
}

int check(ST*p,ST*q)
{
	if((p->rollno==q->rollno)&&(!strcmp(p->name,q->name))&&(p->marks==q->marks))
		return 0;
	else
		return 1;
}*/
