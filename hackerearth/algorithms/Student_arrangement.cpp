#include <iostream>
using namespace std;

int main()
{
  int n,m,k;
  cin>>n>>m>>k;

  int a[n+1];
  int arr[m];
  for(int i=1;i<=m;i++)
    arr[i]=0;

  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
    if(arr[a[i]]<k)
    arr[a[i]]++;
  }

  long long int total=0;

  for(int i=1;i<=m;i++)
  {
    total+=arr[i];
  }

  cout<<n-total<<endl;
  return 0;
}
