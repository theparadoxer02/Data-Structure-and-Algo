#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n,freq[10000],k,keysize[1000];
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>freq[i];

  cin>>k;
  int sum=0;
  for(int i=0;i<k;i++)
    {
      cin>>keysize[k];
      sum = sum + keysize[k];
    }

  if(sum<n)
  {
    cout<<"-1";
    return 0;
  }

  sort(freq,freq+n);
  
  int ans=0,idx = 1;
  int x=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<k;j++)
    {
      if(x<n && keysize[j]>0)
      {
        keysize[j] -= 1;
        ans = ans + idx * freq[x];
        x = x + 1;
      }
    }
    idx = idx + 1;
  }

cout<<ans;

  return 0;
}
