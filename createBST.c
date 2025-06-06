#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* createBST (void *arg)
{
	Tree *ltree;
#ifdef DEBUG
	printf("FILE:%s -> %s:Begins\n",__FILE__,__func__);
#endif
	ltree=(Tree*)malloc(sizeof(Tree));
	if(!ltree)
	{
		perror("malloc");
		(*fptr[1])((void*)"failure");
	}
	ltree->root=NULL;
	ltree->count=0;

#ifdef DEBUG
	printf("FILE:%s -> %s:Ends\n",__FILE__,__func__);
#endif
	return (void*)ltree;

}
