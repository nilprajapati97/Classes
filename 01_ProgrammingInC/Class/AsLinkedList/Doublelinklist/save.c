#include"header.h"
void save(ST *ptr,char *s)
{
	ST *temp;
	FILE *fp;
		fp=fopen(s,"w");
	temp=ptr;	
	while(temp)
	{
		fprintf(fp,"%d\n",temp->rollno);		
		temp=temp->next;
	}	
}

