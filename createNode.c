#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* createNode(void *arg)
{
	Node *new;
#ifdef DEBUG
	printf("FILE:%s -> %s:Begins\n",__FILE__,__func__);
#endif
	new=(Node*)malloc(sizeof(Node));
	if(!new)
	{
		perror("malloc");
		(*fptr[1])((void*)"failure");
	}
	new->child=(Node**)malloc(sizeof(Node*)*2);
	if(!new->child)
	{
		perror("malloc");
		(*fptr[1])((void*)"failure");
	}
//	memset(new->child,'\0',sizeof(Node*)*2);
	*(new->child+0)=NULL;
	*(new->child+1)=NULL;
	printf("FILE:%s -> %s:Please enter data for the new node\n",__FILE__,__func__);
	scanf("%d",&new->data);
#ifdef DEBUG
	printf("FILE:%s -> %s:Ends\n",__FILE__,__func__);
#endif
	return (void*)new;

}
