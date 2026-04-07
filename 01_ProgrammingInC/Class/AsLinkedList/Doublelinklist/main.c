#include"header.h"
main(int argc,char **argv)
{
	DLL *headptr=0;
	DLL *headptr1=0;
	DLL *headptr2=0;
	char ch;


	read_file(&headptr,"data3");
//	read_file(&headptr1,"data1");
//	read_file(&headptr2,"data3");

//	palindrome(headptr);
/*
	//Print the given link list recursively	

	printf("Before========\n");
	print(headptr);
	
	reverse_links_rec(&headptr,headptr,0);

	printf("After========\n");
	print(headptr);
*/

/*
	//Delete duplicate without sort
	merge(&headptr,&headptr1);
	printf("Before========\n");
	print(headptr);

	delete_duplicate(headptr);
	
	printf("After========\n");
	print(headptr);
*/

/*	//Delete duplicate using sort logic
	merge(&headptr,&headptr1);

	sort_data(headptr);	

	printf("Before========\n");
	reverse_print(headptr);

	delete_duplicate_sort(headptr);

	printf("After========\n");
	print(headptr);
	
*/	

/*
	//Delete a particular node while traversing and without count
	printf("Before========\n");
	print(headptr1);

//	delete_traverse(&headptr1);	//Realloc used may not work
	delete_traverse_easy(&headptr1);

	printf("After========\n");
	print(headptr1);
*/
/*
	//Delete particular node wrt to signature
	printf("Before========\n");
	print(headptr1);

	delete_node(&headptr1);

	printf("After========\n");
	print(headptr1);

*/

/*
	//Swap adjacent nodes
	printf("Before========\n");
	print(headptr);

	swap_adjacent(headptr);

	printf("After========\n");
	print(headptr);
*/
	


	//Swap kth node
	printf("Before========\n");
	print(headptr);

//	swap_n(&headptr);		//Data Swapping
	swap_n_1(&headptr);		//Link Swapping

	printf("After========\n");
	print(headptr);



/*
//	Merge two link list Q3

	printf("Before============\n");
	print(headptr);	
	printf("------------------\n");	
	print(headptr1);	


	printf("After============\n");	
//	merge(&headptr,&headptr1);	//Bigger first smaller second
	merge(&headptr1,&headptr);	//Smaller first bigger second
	print(headptr);	
	printf("------------------\n");	
	print(headptr1);	
*/

/*
	do		//Creation of database
	{
		add_end(&headptr);
		printf("Enter y or Y if you want to enter another node\n");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
	print(headptr);
	printf("count=%d\n",count(headptr));
	save(headptr,"data3");
	printf("---------------------\n");
	read_file(&headptr,"data3");
	print(headptr);*/
}
