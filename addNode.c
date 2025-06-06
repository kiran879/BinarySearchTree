#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* addNode(void *arg)
{
	Tree *ltree;
	Node *new,*cur;
#ifdef DEBUG
	printf("FILE:%s -> %s:Begins\n",__FILE__,__func__);
#endif
	ltree=(Tree*)arg;
	new=(Node*)(*fptr[7])(0);//createNode
	if(ltree->root==NULL)
	{
		ltree->root=new;
		return (void*)ltree;
	}
	cur=ltree->root;
	while(cur)
	{
		
		
		printf("FILE:%s -> %s:Testing inside while %d , new data:%d\n",__FILE__,__func__,cur->data,new->data);
		if(new->data <= cur->data)
			cur= *(cur->child+0);
		else
			cur= *(cur->child+1);
		printf("FILE:%s -> %s:Testing end of while size of cur:%ld\n",__FILE__,__func__,sizeof(cur));
	}
	cur=new;
	printf("FILE:%s -> %s:Testing outside while %d\n",__FILE__,__func__,cur->data);


#ifdef DEBUG
	printf("FILE:%s -> %s:Ends\n",__FILE__,__func__);
#endif
	return (void*)ltree;

}
