#include<stdio.h>
main()
{       
	char s[20],s1[20],d[40];
	int i,j;
	
	printf("Enter first string\n");
	scanf(" %[^\n]",s);
	printf("Enter second string\n");
	scanf(" %[^\n]",s1);

	for(i=0,j=0;s[i]&&s1[i];i++)
	{
		d[j++]=s[i];
		d[j++]=s1[i];
	}
	
	if(s[i]==s1[i])
	{
		d[j]='\0';
	}
	else if(s[i]>s1[i])
	{
		for(;s[i];)
			d[j++]=s[i++];
		d[j]=s[i];
	}
	else
	{
		for(;s1[i];)
			d[j++]=s1[i++];
		d[j]=s1[i];
	}
		
		printf("Modified string =%s\n",d);


}

