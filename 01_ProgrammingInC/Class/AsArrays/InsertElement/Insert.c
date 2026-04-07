#include<stdio.h>
main()
{
	char a[10],insert,temp;
	int i,j,ele,pos;
	
	printf("Enter the string\n");
	scanf("%s",a);

	printf("Enter the character you want to insert\n");
	scanf(" %c",&insert);

	printf("Enter the position at which you want to insert the character \n");
	scanf("%d",&pos);
	for(ele=0;a[ele];ele++);

	for(i=0;i<=ele+1;i++)
	{
		if(i>=pos)
		{
			temp=a[i];
			a[i]=insert;
			insert=temp;
		}
		if(!a[i])
			break;
	}
		a[i]='\0';
		
	printf("The new string is \n");
	printf("%s",a);
	printf("\n");
	
}
