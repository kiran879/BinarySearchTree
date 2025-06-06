typedef struct node 
{
	int data;
	struct node **child;
}Node;

typedef struct
{
	Node *root;
	int count;
}Tree;
