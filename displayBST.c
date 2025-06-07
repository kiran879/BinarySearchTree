#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* displayBST(void *arg)
{
	Node *parent;
	/*
#ifdef DEBUG
	printf("FILE:%s -> %s:Begins\n",__FILE__,__func__);
#endif
*/
	parent=(Node*)arg;

	if(*(parent->child+0))
		displayBST((void*)*(parent->child+0));//passing left child to the display function
	printf("%d->",parent->data);//printing the current node's data(which will be the parent for every display call)
	if(*(parent->child+1))
		displayBST((void*)*(parent->child+1));//passing right child to the display function
/*
#ifdef DEBUG
	printf("FILE:%s -> %s:Begins\n",__FILE__,__func__);
#endif
*/
	return 0;

}
