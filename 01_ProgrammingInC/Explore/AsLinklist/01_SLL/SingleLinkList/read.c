#include"header.h"
void read_file(ST **ptr,char *s)
{
	FILE *fp;
		fp=fopen(s,"r");
			if(fp==0)
			{
				printf("File is not present\n");
				return;
			}
	ST *temp,v,*temp1;
		
		while(fscanf(fp,"%d %s %f",&v.rollno,v.name,&v.marks)!=EOF)
		{
			temp=malloc(sizeof(ST));
			*temp=v;
			if(*ptr==0)
			{
				temp->next=0;
				*ptr=temp;
				temp1=temp;
			}
			else
			{
				temp->next=temp1->next;
				temp1->next=temp;
				temp1=temp;
			}
		}
}
