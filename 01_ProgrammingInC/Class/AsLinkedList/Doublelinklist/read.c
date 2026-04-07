#include"header.h"
void read_file(DLL **ptr,char *s)
{
	FILE *fp;
		fp=fopen(s,"r");
			if(fp==0)
			{
				printf("File is not present\n");
				return;
			}
	DLL *temp,v,*temp1;
		
		while(fscanf(fp,"%d",&v.rollno)!=EOF)
		{
			temp=malloc(sizeof(ST));
			*temp=v;
			temp->prev=temp->next=0;

			if(*ptr==0)
			{
				temp->next=*ptr;
				temp->prev=*ptr;
				*ptr=temp;
				temp1=temp;
			}
			else
			{
				temp1->next=temp;
				temp->prev=temp1;
				temp1=temp;
			}
		}
}
