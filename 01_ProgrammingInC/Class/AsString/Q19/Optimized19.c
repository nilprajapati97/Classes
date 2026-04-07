#include<stdio.h>
main()
{
	char s[40],temp;
	int i,j,k,l,len;
 
	printf("Enter the string \n");
	scanf(" %[^\n]",s);

	for(len=0;s[len];len++);
	len--;
	printf("%d",*p);
	for(i=0,j=len;i<j;i++,j--)	//Reverse The input string
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
//	printf("%s\n",s);

	for(i=0;s[i];i++)
	{
		if(s[i]!=' ')
		{
			for(j=0; s[i+j] != ' ' && s[i+j]!='\0'; j++);

			j=j-1;

			for(k=i,l=i+j;k<l;k++,l--)
			{
				temp=s[k];
				s[k]=s[l];
				s[l]=temp;
			}
		
//			printf("i=%d, j=%d %s\n",i,j,s);
			i=i+j;

		}
	}

	printf("%s\n",s);
	
}
