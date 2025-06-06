#include"headers.h"
#include"declarations.h"

int init()
{
#ifdef DEBUG
	printf("FILE:%s -> %s:Begins\n",__FILE__,__func__);
#endif
	fptr[0] = mainMenu;
	fptr[1] = exitProgram;
	fptr[2] = createBST;
	fptr[3] = addNode;
	fptr[4] = deleteNode;
	fptr[5] = displayBST;
	fptr[6] = deleteBST;
	fptr[7] = createNode;

#ifdef DEBUG
	printf("FILE:%s -> %s:Ends\n",__FILE__,__func__);
#endif
	return 0;
	
}
