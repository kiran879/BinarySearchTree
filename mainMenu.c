#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* mainMenu(void *arg)
{
	int choice=0;
#ifdef DEBUG
	printf("FILE:%s -> %s:Begins\n",__FILE__,__func__);
#endif
	char* menu[]={
		"___MAIN MENU___",
		"1:Create Binary Search Tree",
		"2:Add Node",
		"3:Delete Node",
		"4:Display BST",
		"5:Delete BST",
		"0:Quit"
	};
jump:
	for(int i=0;i<7;i++)
	{
		printf("%s\n",menu[i]);
	}
	scanf("%d",&choice);
	if(choice==0)
	{
		(*fptr[1])((void*)"success");//exitProgram
	}
	else if(choice==1)
	{
		if(arg!=NULL)
		{
			printf("Binary Search Tree already exists, please proceed with Tree operations\n");
			goto jump;
		}
		arg=(*fptr[2])(arg);//createBST
	}
	else if(choice>=2 && choice<=5 && choice!=4)
	{
		if(arg==NULL)
		{
			printf("Binary Search Tree does not exist, please create the Tree to perform operations on it\n");
			goto jump;
		}
		(*fptr[choice+1])(arg);//operations on BST

	}
	else if (choice==4)
	{
		if(arg==NULL)
		{
			printf("Binary Search Tree does not exist, please create the Tree to perform operations on it\n");
			goto jump;
		}
		(*fptr[choice+1])((void*)((Tree*)arg)->root);//operations on BST
	}
	else
	{
		printf("Error: Invalid choice!\n");
		goto jump;
	}

#ifdef DEBUG
	printf("FILE:%s -> %s:Ends\n",__FILE__,__func__);
#endif
	return arg;
}
