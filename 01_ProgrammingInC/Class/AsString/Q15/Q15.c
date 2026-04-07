//Sort Given string in ascending order using both bubble sort and selection sort

#include<stdio.h>
main()
{
	char s[20],temp;
	int i,j,n;

	printf("Enter string\n");
	scanf(" %[^\n]",s);

	for(n=0;s[n];n++);	//Length of String
	n=n-1;
	
	//Bubble sort
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(s[j]>s[j+1])
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	printf("The sorted string in ascending order is\n %s\n",s);	

	//Selection Sort
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(s[i]<s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}

	printf("The sorted string in descending order is\n %s\n",s);	

}








