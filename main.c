#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"
int init();
void* mainMenu(void*);
void* exitProgram(void*);
void* createBST(void*);
void* addNode(void*);
void* deleteNode(void*);
void* displayBST(void*);
void* deleteBST(void*);
void* createNode(void*);

void* (*fptr[NOF])(void*);

int main()
{
	Tree *tree=NULL;
#ifdef DEBUG
	printf("FILE:%s -> %s:Begins\n",__FILE__,__func__);
#endif
//	tree=NULL;
	init();
	while(1)
		tree=(Tree*)(*fptr[0])((void*)tree);


#ifdef DEBUG
	printf("FILE:%s -> %s:Ends\n",__FILE__,__func__);
#endif

}
