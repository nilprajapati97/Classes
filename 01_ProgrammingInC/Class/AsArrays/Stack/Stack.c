#include<stdio.h>
void main()
{
	int a[100],array_index=0,choice;

	do
	{
		do
		{
		printf("Enter your choice \n 1)To push data into stack");
		printf("\n 2)To Pop data from stack\n 3)To exit\n");
		scanf("%d",&choice);
		}while(choice<1 || choice>3 );
		
		if(choice==1)
		{
			printf("Enter an element to put in the stack\n");
			scanf("%d",a+(array_index++));
		}
		
		if(choice==2)
		{
			if(array_index==0)
			{
				printf("Stack is Empty\n");
				continue;
			}
			printf("\n%d\n",a[--array_index]);	
		
		}
	}while(choice!=3);


}

