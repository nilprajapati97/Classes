#include<stdio.h>
main()
{
	char s[200],temp;
	int i,key,j,k;

	printf("Enter the encrypted string\n");
	scanf(" %[^\n]",s);

	printf("Enter the ncryption key\n");
	scanf("%d",&key);
	
	for(i=0,j=1;s[i];i++)
	{
		if(!((s[i]>='A' && s[i]<='Z')||( s[i]>='a' && s[i]<='z' )))
		continue;
		else
		{
			if(j%key==0)
			{
				k=1;
				for(;s[i+k]==' ';k++);
				
				if(s[i+k]=='\0')
					continue;

				temp=s[i];
				s[i]=s[i+k];
				s[i+k]=temp;
			}
			j++;
		}

	}
	printf("The Decrypted text=\n%s\n",s);
}
