#include<stdio.h>
main()
{      
	char s[20],temp;
	int i,j,k;

	printf("Enter the string\n");
	scanf(" %[^\n]",s);

	for(i=0;s[i];i++)
	{
		if(s[i]!=' ')
		{
			for(j=0;(s[i+j]!=' ')&&(s[i+j]!='\0');j++);
			j--;
				
			if(j!=0)
			{
				for(k=0;k<=j/2;k++)
				{
					temp=s[i+k];
					s[i+k]=s[i+j-k];
					s[i+j-k]=temp;
				}
				i=i+j;
			}
//			printf("%s\n",s);
		}

	}

	printf("Modified string: \n%s\n",s);
}
