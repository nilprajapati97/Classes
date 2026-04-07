#include<stdio.h>
main()
{
	char s[20],ch;
	int c,i;
	
	printf("Enter the string \n");
	scanf(" %[^\n]",s);

	printf("Enter the character you want to check for occurence \n");
	scanf(" %c",&ch);

	for(c=i=0;s[i];i++)
	{
		if(ch==s[i])
			c++;
	}

	printf("The number of times %c is present is %s =%d\n",ch,s,c);


}
