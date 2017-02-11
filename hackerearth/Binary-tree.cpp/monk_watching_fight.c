#include <bits/stdc++.h>
using namespace std;
 
struct node
{
 int data;
 struct node *left;
 struct node *right;
};
 
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
 else if(val<=ptr->data)
        ptr->left = insert(ptr->left,val);
 else if(val>ptr->data)
        ptr->right = insert(ptr->right,val);
        
 return ptr;
}
int height(struct node *ptr)
{
 int l=0,r=0;
 if(ptr==NULL)
 return 0;
 l = height(ptr->left);
 r = height(ptr->right);
 return max(l,r)+1;
}
 
int main() 
{
 struct node *root=NULL;
 int n,i,k,ans;
 cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>k;
  root = insert(root,k);
 }
 ans = height(root);
 cout<<ans<<endl;
 return 0;
}