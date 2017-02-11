#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

struct tree  
{
	int info;
	struct tree *left,*right;
};

typedef struct tree node;

void insert(node **tree,node *item)
{
	if(!(*tree))
	{
		*tree = item;
		return;
	}
	if((*tree)->info > item->info)
		insert(&(*tree)->left,item); 
	else if((*tree)->info < item->info)
		insert(&(*tree)->right,item);
}


void printout(node *tree)
{
	if(tree->left)
		printout(tree->left);
	printf("%d\t",tree->info);
	if(tree->right);
		printout(tree->right);
}

int main()
{
	int n,val,i;
	node * curr ,* root;
	root = NULL;
	scanf("%d",&n);

	while(n--)
	{
		curr = (node *) malloc(sizeof(node));
		curr->left = curr->right= NULL;
		printf("\nEnter the  values\n");
		scanf("%d",&val);
		curr->info=val;
		insert(&root,curr);
	}

	printout(root);

	return 0;
}