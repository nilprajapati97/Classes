#include"header.h"
int count(DLL *temp)
{
	int c=0;
	while(temp)
	{
		c++;
		temp=temp->next;
	}
	return c;
}
