#include<stdio.h>
main()
{
	char s[20];
	int i,up_count,low_count,sp_count,digit_count;
	unsigned char ch;

/*	for(ch=0;ch<=127;ch++)
		printf("AscII =%d,  Charcter = %c\n",ch,ch);*/



	puts("Enter a string \n" "\n");
	scanf(" %[^\n]",s);
	
	up_count=low_count=sp_count=digit_count=0;
	for(i=0;s[i];i++)
	{
		if( s[i]>='A' && s[i]<='Z')
			up_count++;	


		else if( s[i]>='a' && s[i]<='z')
			low_count++;	


		else if( s[i]>='0' && s[i]<='9')
			digit_count++;
		else
			sp_count++;	

	}

	printf("The Upper case characters = %d\n",up_count);
	printf("The Lower case characters = %d\n",low_count);
	printf("The Digits = %d\n",digit_count);
	printf("The Special characters = %d\n",sp_count);

}
