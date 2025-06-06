#ifndef NOF
#define NOF 8
#endif
#ifndef SIZE
#define SIZE 5
#endif

extern void* mainMenu(void*);
extern void* exitProgram(void*);
extern void* createBST(void*);
extern void* addNode(void*);
extern void* deleteNode(void*);
extern void* displayBST(void*);
extern void* deleteBST(void*);
extern void* createNode(void*);

extern void* (*fptr[NOF])(void*);
