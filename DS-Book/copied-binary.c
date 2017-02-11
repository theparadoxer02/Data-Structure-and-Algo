#include <stdlib.h>
#include <stdio.h>

struct bin_tree {
int data;
struct bin_tree * right, * left;
};

typedef struct bin_tree node;

void insert(node ** tree, int val)
{
    node *temp = NULL;
    if(!(*tree))
    {
        temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }

    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }

}

void print_preorder(node * tree)
{
    if (tree)
    {
        printf("%d ",tree->data);
        print_preorder(tree->left);
        print_preorder(tree->right);
    }

}

void print_inorder(node * tree)
{
    if (tree)
    {
        print_inorder(tree->left);
        printf("%d ",tree->data);
        print_inorder(tree->right);
    }
}

void print_postorder(node * tree)
{
    if (tree)
    {
        print_postorder(tree->left);
        print_postorder(tree->right);
        printf("%d ",tree->data);
    }
}

void deltree(node * tree)
{
    if (tree)
    {
        deltree(tree->left);
        deltree(tree->right);
        free(tree);
    }
}

node* search(node * tree, int val)
{
    if(!(tree))
    {
        return NULL;
    }

    if(val < (tree)->data)
    {
        search(((tree)->left), val);
    }
    else if(val > (tree)->data)
    {
        search(((tree)->right), val);
    }
    else if(val == (tree)->data)
    {
        return tree;
    }
}


int nodes( node * tree)
{
    if(!tree)
        return 0;
    else
        return  1 + nodes(tree->left) + nodes(tree->right);
}

void main()
{
    node *root;
    node *tmp;
    //int i;

    root = NULL;
    /* Inserting nodes into tree */
    int n,val,count,search_elem;
    printf("Enter the number of nodes to insert: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the value:  ");
        scanf("%d",&val);
        insert(&root, val);
    }

    /* Printing nodes of tree */
    printf("\n\nPre Order Display\n");
    print_preorder(root);

    printf("\n\nIn Order Display\n");
    print_inorder(root);

    printf("\n\nPost Order Display\n");
    print_postorder(root);

    /* Search node into tree */

    printf("\nEnter the data to be searched: ");
    scanf("%d",&search_elem);

    tmp = search(root, search_elem);
    if (tmp)
    {
        printf("\nSearched node=%d\n", tmp->data);
    }
    else
    {
        printf("\nData Not found in tree.\n");
    }

    count = nodes(root);

    printf("\nTotal number of nodes: %d\n",count);

    /* Deleting all nodes of tree */
    deltree(root);
}