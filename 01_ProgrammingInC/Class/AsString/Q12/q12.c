#include<stdio.h>
main()
{
	char s[20];
	int i,j,c,k;
	
	printf("Enter a string\n");
	scanf(" %[^\n]",s);
	printf("The repeated characters in string  are:\n");
	
	for(i=0;s[i];i++)
	{
		if(s[i]>=97 && s[i]<=122)
			s[i]=s[i]-32;
	
	}



	for(i=0;s[i];i++)
	{
		c=1;
		for(j=i+1;s[j];j++)
		{
			if(s[i]==s[j])
			{
				c++;
				for(k=j;s[k];k++)
					s[k]=s[k+1];
				j--;
			}
		}
		if(c>1)
			printf("%c--------%d\n",s[i],c);

	}

}
