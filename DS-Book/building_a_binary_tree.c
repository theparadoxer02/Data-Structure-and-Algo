#include <stdlib.h>
#include <stdio.h>

struct tree
{
	int info;
	struct tree *left,*right;
} *root,*p,*q;

struct tree *make(int y)
{
	//newnode = struct node *newnode;
	struct tree *newnode = new struct tree;
	newnode = (struct tree *)malloc(sizeof(struct tree));
	newnode->info = y;
	newnode->left = newnode->right = NULL;
	return(newnode);
};

void left(struct tree *r,int x)
{
	if(r->left != NULL)
		printf("Invalid");
	else
		r->left = make(x);
};

void right(struct tree *r,int x)
{
	if(r->right != NULL)
		printf("Invalid");
	else
		r->right = make(x);
}


void inorder(struct tree *r)
{
	if(r!=NULL)
	{
		inorder(r->left);
		printf("\t %d",r->info);
		inorder(r->right);
	}
}

void preorder(struct tree *r)
{
	if(r!=NULL)
	{
		printf("\t %d",r->info);
		preorder(r->left);
		preorder(r->right);
	}
}

void postorder(struct tree *r)
{
	if(r!=NULL)
	{
		preorder(r->left);
		preorder(r->right);
		printf("\t %d",r->info);
	}
}

void insert(struct tree **r,int val)
{
	if(*r==NULL)
		*r=make(val);
	else if(val<(*r)->info)
		(*r)->left = insert(&(*r)->left,val);
	else
		(*r)->right = insert(&(*r)->right,val);
}
	
int main()
{
	int no,choice,value;
	struct tree *root = NULL;
	printf("\nEnter the o of elements you want to Enter: ");
	scanf("%d", &no);
	while(no--)
	{
		scanf("%d",&value);
		insert(&root,value);
	}

	inorder(root);
	return 0;

}