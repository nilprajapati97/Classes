#include<stdio.h>
void reverse_string(char*);
int my_strlen(const char*);
main()
{
	char s[20];
	printf("Enter a string \n");
	scanf(" %[^\n]",s);

	printf("Before---- %s\n",s);
	reverse_string(s);
	printf("After---- %s\n",s);
}

void reverse_string(char *p)
{
	static int i;
	int j=my_strlen(p);
	char temp;
	if(i<=j/2)
	{
		temp=p[i];
		p[i]=p[j-i-1];
		p[j-i-1]=temp;
		i++;
		reverse_string(p);
	}


}
int my_strlen(const char *s)
{
	int i;
	for(i=0;s[i];i++);
	return i;

}
