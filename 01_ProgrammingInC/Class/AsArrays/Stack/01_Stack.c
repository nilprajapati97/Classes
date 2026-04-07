#include <stdio.h>

void main()
{
	int a[100], array_index = 0, choice;

	do
	{
		do
		{
			printf("\nEnter your choice \n");
			printf(" 1) To push data into stack\n");
			printf(" 2) To pop data from stack\n");
			printf(" 3) To exit\n");
			printf(" 4) To print stack\n");
			scanf("%d", &choice);
		} while (choice < 1 || choice > 4);

		if (choice == 1)
		{
			if (array_index >= 5) {
				printf("Stack is Full\n");
			} else {
				printf("Enter an element to put in the stack\n");
				scanf("%d", &a[array_index++]);
			}
		}

		else if (choice == 2)
		{
			if (array_index == 0)
			{
				printf("Stack is Empty\n");
			}
			else
			{
				printf("Popped: %d\n", a[--array_index]);
			}
		}

		else if (choice == 4)
		{
			if (array_index == 0)
			{
				printf("Stack is Empty\n");
			}
			else
			{
				printf("Stack contents (top to bottom):\n");
				for (int i = array_index - 1; i >= 0; i--)
				{
					printf("%d\n", a[i]);
				}
			}
		}

	} while (choice != 3);
}

