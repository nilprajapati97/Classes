#include<stdio.h>
main()
{       
	char s[20],sub[20];
	int l1,l2,i,j,c;
	
	printf("Enter the string\n");
	scanf(" %[^\n]",s);
start:	printf("Enter the substring\n");
	scanf(" %[^\n]",sub);
	
	for(l1=0;s[l1];l1++); // Length of string

	for(l2=0;s[l2];l2++);// Length of substring
	l1=l1-1;
	l2=l2-1;
	
	if(l1>=l2)
	{
		for(i=0,c=0;s[i];i++)
		{
			if(s[i]==sub[0])
			{
				for(j=0;sub[j];j++)
					if(s[i+j]!=sub[j])
						break;
				if(!sub[j])
					{
						c++;
						i=i+j-1;
					}
			}
			


		}

		printf("The substring is present %d times in given arrray\n",c);


	}
	else
	{
		printf("Length of substring exceeds length of string \n");
		goto start;
	}


}







