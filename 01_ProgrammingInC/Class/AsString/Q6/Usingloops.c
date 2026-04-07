#include<stdio.h>
main()
{
    
    	char s[20],temp;
	int i,j;

	printf("Enter the string\n");
	scanf(" %[^\n]",s);

	for(i=0;s[i];i++);
	printf("The length of string =%d\n",i);
	for(i=i-1,j=0;j<i;j++,i--)
	{
		temp=s[j];
		s[j]=s[i];
		s[i]=temp;
	}

	printf("%s\n",s);

}
