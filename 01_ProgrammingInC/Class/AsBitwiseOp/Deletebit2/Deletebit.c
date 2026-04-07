#include<stdio.h>
main()
{
	int num,pos,bit,temp,mask,i;
	printf("Enter a number\n");
	scanf("%x",&num);
	printf("Enter bit position\n");
	scanf("%d",&pos);
	printf("Enter bit position\n");
	scanf("%d",&bit);
	temp=0;
	mask=1;
	for(i=1;i<=pos-bit;i++)
	mask=(mask<<1)|mask;
	temp=num&mask;
	num=(num>>bit)&(~mask);
	temp=temp|num;
	
	printf("The input number  is\n");
	for(i=31;i>=0;printf("%d",num>>i&1),i--);
	



	printf("\nThe deletbit number  is\n");
	for(i=31;i>=0;printf("%d",temp>>i&1),i--);


	





	printf("The modified number is =%x\n",temp);


}
