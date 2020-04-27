#include <stdio.h>
#include <stdlib.h>

typedef struct _bNode{
	int data;
	struct bNode* left;
	struct bNode* right;
}bTNode;

int main()
{	
	bTNode* head;
	bTNode* nod1= (bTNode*)malloc(sizeof(bTNode));
	nod1->left=NULL;
	nod1->right=NULL;
	nod1->data=100;
	head = nod1;

	printf("%d",nod1->data);
	return 0;
}
