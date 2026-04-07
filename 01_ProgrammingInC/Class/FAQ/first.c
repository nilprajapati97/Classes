#include<stdio.h>
#include<stdlib.h>

main()
{
//	int a[1];

/*	char *q=malloc(sizeof(char)*1024*1024);
		if(q==0)
			printf("Malloc didnot allocate\n");
*/
	//To find the maximum sizeof heap
/*	unsigned int m=0;
	int *p,c=1024*1024;
	char *q;
	do
	{
		if(m!=0)
//			free(p);
			free(q);
//		p=malloc(sizeof(int)*c);
		q=malloc(sizeof(char)*c);
		m++;
		c=c*m;
	}while(q);
	printf("m=%u*1024*1024\n",m);*/

	


	//THe maximum length of an array bock can be 2G
	char a[8380000]={};	
	printf("%d\n",sizeof(a));
//	int b[1024*1024]={};
//	printf("%u\n",511*1024*1024);
//	printf("%u\n",sizeof(b));

/*	FILE *fp;	//o/p whenever a file pointer is incremented the file pointer moves by 148 bytes in case of a Ubuntu system and 60 bytes incase of turbo
	
	fp=fopen("data","r");
	printf("%u\n",fp);
	fp++;
	printf("%u\n",fp);*/
}
