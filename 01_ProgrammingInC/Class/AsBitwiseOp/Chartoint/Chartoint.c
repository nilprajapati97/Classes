#include<stdio.h>
main()
{
	char c[48];
	unsigned int upper,lower;
	int i,j;
	upper=lower=0x00;
	
	printf("Enter the character input \n");
	scanf("%s",c);

	for(i=47;i>=0;i--)
	{
		if(i>=32)	
		{
			upper=((c[47-i]-48)<<(i-32))|upper;
		}
		else
		{
			lower=(((c[47-i]-48)<<i))|lower;
		}
	}
	printf("%x%x\n",upper,lower);



 
}
