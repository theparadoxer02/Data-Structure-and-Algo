#include <bits/stdc++.h>
using namespace std;
 
struct node
{
 int data;
 struct node *left;
 struct node *right;
};
 

int count = 0;

struct node *insert(struct node *ptr,int val)
{
 if(ptr==NULL)
{
  struct node *tmp = (struct node *)malloc(sizeof(struct node));
  tmp->data = val;
  tmp->left = NULL;
  tmp->right = NULL;
  return tmp;
 }
 if(val=ptr->data)
 	count++; break;
 else if(val<ptr->data)
        ptr->left = insert(ptr->left,val);
 else if(val>ptr->data)
        ptr->right = insert(ptr->right,val);
        
 return ptr;
}

int main() 
{
	struct node *root=NULL;
	int n,i,k,ans;
	cin>>t;
 	while(t--)
 	{	
		cin>>n>>x;
	 	for(i=0;i<n;i++)
	 	{
	  		cin>>k;
	  		root = insert(root,k);
	 	}
	 	return 0;

}