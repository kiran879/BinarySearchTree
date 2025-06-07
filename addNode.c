#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* addNode(void *arg)
{
	Tree *ltree;
	Node *new;
	Node *cur;
	Node *temp;//to keep track of last visited node
#ifdef DEBUG
	printf("FILE:%s -> %s:Begins\n",__FILE__,__func__);
#endif
	ltree=(Tree*)arg;
	new=(Node*)(*fptr[7])(0);//createNode
	if(*new->child+1)
	{
		printf("FILE:%s -> %s:Inside if \n",__FILE__,__func__);

	}
	if(ltree->root==NULL)
	{
		ltree->root=new;
		return (void*)ltree;
	}
	temp=cur=ltree->root;
	while(cur)
	{	
		temp=cur;//temp stores the cur node before it gets updated in the below lines
		//printf("FILE:%s -> %s:Testing inside while %d , new data:%d\n",__FILE__,__func__,cur->data,new->data);
		if(new->data <= cur->data)
			cur= *(cur->child+0);
		else
			cur= *(cur->child+1);
		//printf("FILE:%s -> %s:Testing end of while size of cur:%ld\n",__FILE__,__func__,sizeof(cur));
	}
	if(new->data <= temp->data)
		*(temp->child+0)= new;
	else
		*(temp->child+1)= new;
	
	//cur=new;
	//printf("FILE:%s -> %s:Testing outside while %d\n",__FILE__,__func__,cur->data);
#ifdef DEBUG
	printf("FILE:%s -> %s:Ends\n",__FILE__,__func__);
#endif
	return (void*)ltree;

}
