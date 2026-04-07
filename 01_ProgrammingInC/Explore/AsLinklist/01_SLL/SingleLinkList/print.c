#include"header.h"
void print(ST *temp)
{
	while(temp)
	{
		printf("%d %s %f\n",temp->rollno,temp->name,temp->marks);
		temp=temp->next;
	}
}
