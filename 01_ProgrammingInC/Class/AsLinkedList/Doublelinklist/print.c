#include"header.h"
void print(DLL *temp)
{
	while(temp)
	{
		printf("%d\n",temp->rollno);
		temp=temp->next;
	}
}

void reverse_print(DLL *temp)
{
	while(temp->next)
		temp=temp->next;
	while(temp)
	{
		printf("%d\n",temp->rollno);
		temp=temp->prev;
	}
}
