#include"headers.h"
#include"declarations.h"
void* exitProgram(void *status)
{
#ifdef DEBUG
	printf("FILE:%s-> %s Begins\n",__FILE__,__func__);
#endif
	if(strncmp((char*)status,"success",7)==0)
	{
		exit(EXIT_SUCCESS);
	}
	else if(strncmp((char*)status,"failure",7)==0)
        {
                exit(EXIT_FAILURE);
        }	
#ifdef DEBUG
	printf("FILE:%s-> %s Ends\n",__FILE__,__func__);     
#endif
        return 0;
}

