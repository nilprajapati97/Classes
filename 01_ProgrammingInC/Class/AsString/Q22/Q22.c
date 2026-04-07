#include<stdio.h>
int count_deletechar(char *,char);
void delete_char(char *);
main()
{
	char s1[20],s2[20];
	int i,c1,c2;

	printf("Enter First String \n"); 
	scanf(" %[^\n]",s1);

	printf("Enter Second String \n"); 
	scanf(" %[^\n]",s2);

	delete_char(s1);
	delete_char(s2);

	for(i=0;s1[i];i++)
	{
		c1=count_deletechar(s1,s1[i]);
		c2=count_deletechar(s2,s2[i]);
		if(c1!=c2)
			break;
	}
	if(!s1[i])
		printf("The two strings are anagram\n");
	else
		printf("The two strings are not anagram\n");

}

void delete_char(char *p)
{
	int i,j;

	for(i=0;*(p+i);i++)
	{
		if(!(( p[i]>='A'  && p[i]<='Z')||(p[i]>='a' && p[i]<='z')))
		{
			for(j=i;*(p+j);j++)
				*(p+j)=*(p+j+1);
			i--;
		}
		else
		*(p+i)=*(p+i)&~(1<<5);
			
	}

}

int count_deletechar(char *p, char ch)
{
	int c,i,j;
	for(i=0,c=0;p[i];i++)
	{
		if(p[i]==ch)
		{
			c++;
			for(j=i;p[j];j++)
				p[j]=p[j+1];
			i--;
		}

	}
	return c;
}

