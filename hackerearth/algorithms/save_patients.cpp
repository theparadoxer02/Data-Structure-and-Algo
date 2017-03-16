#include <iostream>

using namespace std;

void bubble_sort(int A[],int n)
{
  for(int i=0;i<n-1;i++)
    for(int j=0;j<n-i-1;j++)
      if(A[j] > A[j+1] )
      {
        int temp = A[i];
        A[i] = A[i+1];
        A[i+1] = temp;
      }
}


int main()
{
  int t,vacc[1000],pat[10000],flag=0;
  cin>>t;

  for(int i=0;i<t;i++)
    cin>>vacc[i];

  for(int i=0;i<t;i++)
    cin>>pat[i];

    bubble_sort(vacc,t);
    bubble_sort(pat,t);

    for(int i=0;i<t;i++)
    {
      if(vacc[i] > pat[i])
      {
        flag=1;
        break;
      }
    }
    if(flag==1)
      cout<<"No";
    else
      cout<<"Yes";
  return 0;
}
