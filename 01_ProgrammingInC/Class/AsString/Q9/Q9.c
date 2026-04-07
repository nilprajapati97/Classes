#include<stdio.h>
main()
{
      
	char s[20],ch;
	int i,j;

	printf("Enter the string\n");
	scanf(" %[^\n]",s);

	printf("Enter the character you want to delete\n");
	scanf(" %c",&ch);
	
	for(i=0;s[i];i++)
	{
		if(ch==s[i])
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];
			i--;

		}
	}

	printf("%s\n",s);
}
