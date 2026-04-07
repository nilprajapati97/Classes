#include<stdio.h>
main()
{
	char s[20];
	int i;
	printf("Enter String\n");
	scanf(" %[^\n]",s);

	for(i=0;s[i];i++)
	{
		if( ( s [i]>='A'&& s[i]<='Z') || ( s[i]>='a' && s[i]<='z' ) )
			s[i]=s[i]^1<<5;

	}

//	puts("Hello World"    "Bye World"); // By default \n
	puts(s);
}
