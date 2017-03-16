#include <iostream>

using namespace std;

int main()
{
  int p,n,q,arr[10000];
  cin>>n;
  for(int j=0;j<n;j++)
  {
    cin>>arr[j];
  }
  cin>>q;
  long sum=0;
  for(int i=0;i<q;i++)
  {
    int count=0;
    cin>>p;
    long long sum=0;
    for(int k=0;k<n;k++)
    {
      if(arr[k]<=p)
      {
        count++;
        sum = sum + arr[k];
      }
    }
    cout<<count <<" "<< sum << endl;
  }
}
