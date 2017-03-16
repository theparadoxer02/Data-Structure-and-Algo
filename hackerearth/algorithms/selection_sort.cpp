#include <iostream>

using namespace std;

void selection_sort(int A[],int n,int x)
{
  int minimum;
  for(int i=0;i<x;i++)
  {
    minimum = i;
    for(int j=i+1;j<n;j++)
    {
      if(A[j]<A[minimum])
        minimum = j;
    }
    swap(A[i],A[minimum]);
  }
}

int main()
{
  int t,x,n;
  int a[10000];
  cin>>n>>x;
  for(int i=0;i<n;i++)
    cin>>a[i];
  selection_sort(a,n,x);
  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
  return 0;
}
