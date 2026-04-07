#include<stdio.h>
#include<stdlib.h>
struct st
{
	int rollno;
	char name[20];
	float marks;
	struct st *next;
};
typedef struct st ST;
