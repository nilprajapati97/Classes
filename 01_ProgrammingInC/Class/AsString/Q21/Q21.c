//Q21
#include<stdio.h>
main()
{
	char s1[20],s2[50],s3[20];
	int i,j,k,l1,l2,l3;

	printf("Enter the first string\n");	//Tomorrow
	scanf(" %[^\n]",s1);
	printf("Enter the second string\n");	//Today is Sunday
	scanf(" %[^\n]",s2);
	printf("Enter the replace word\n");	//Today
	scanf(" %[^\n]",s3);

	for(l1=0;s1[l1];l1++);	//Length of First String
	for(l2=0;s2[l2];l2++);	//Length of Second String
	for(l3=0;s3[l3];l3++);	//Length of Replacement String
//	l1--;
//	l2--;
//	l3--;

	for(i=0;s2[i];i++)
	{
		if(s2[i]==s3[0])
		{
			for(j=0;s3[j];j++)
				if(s3[j]!=s2[i+j])
					break;
			
			
			if(!s3[j])
			{
				for(j=0;s1[j]&&s3[j];j++)
				{
					s2[i+j]=s1[j];
				}
			
				if(s1[j]==s3[j]);
	
				else if(s1[j]>s3[j])
				{
					for(k=l2+1;k>=i+j;k--)
						s2[k+l1-l3]=s2[k];
					for(;s1[j];j++)
						s2[i+j]=s1[j];
					l2=l2+l1-l3;

				}
				else
				{	
					for(k=i+j;s2[k];k++)
						s2[k]=s2[k+l3-l1];
					l2=l2-l3-l1;
				}
				i=i+j-1;		
			}
		}
	}

	printf("%s\n",s2);
}
