#include<stdio.h>
#include<stdlib.h>
struct st
{
	struct st *prev;
	int rollno;
	struct st *next;
};
typedef struct st DLL;
typedef struct st ST;
