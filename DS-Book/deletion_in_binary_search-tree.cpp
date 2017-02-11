#include <stdio.h>
#include <stdlib.h>

struct node {
	int key;
	struct node *left, *right ;
};

struct node *newNode(int item)
{
	struct node *temp = (struct node *) malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;	
}

void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d ",root->key);
		inorder(root->right);
	}
}

struct node* insert(struct node* node,int key)
{
	if(node == NULL) return newNode(key);
	if (key < node->key)
		node->left = insert(node->left,key);
	else
		node->right = insert(node->right,key);

	return node;
}


struct node * minvalue(struct node* node)
{
	struct node* current = node;
	if(node->left != NULL)
		current = current->left;
	return current;
}

struct node* deleteNode(struct node* root , int key)
{
	if(root == NULL) return root;
	if(key < root->key)
		root ->left = deleteNode(root->left,key);
	else if(key > root->key)
		root->right = 	deleteNode(root->right,key);
	else
	{
		if(root->left == NULL)
		{
			struct node *temp = root->right;
			free(root);
			return temp;
		}

		else if(root->right == NULL)
		{
			struct node *temp = root->left;
			free(root);
			return temp;
		}

		struct node* temp = minvalue(root->right);
		root->key = temp->key;
		root->right = deleteNode(root->right, temp->key);

	}
	return root;
}

int main()
{

	struct node *root = NULL;
	root = insert(root, 50);
	root = insert(root, 90);
	root = insert(root, 780);
	root = insert(root, 530);
	root = insert(root, 5340);
	root = insert(root, 520);
	root = insert(root, 5120);

	printf("\nInorder traversal of a node: ");
	inorder(root);

	printf("\nDelete Node 50 ");
	deleteNode(root,50);
	printf("\nInorder traversal of modified node: ");
	inorder(root);

	printf("\nDelete Node 520 ");
	deleteNode(root,520);
	printf("\nInorder traversal of modified node: ");
	inorder(root);

	printf("\n");
	return 0;
}