#include <iostream>
#include <string.h>

using namespace std;

struct fan
{
  string name;
  int fq;
};

int main()
{
  int n,t;
  cin>>n>>t;
  struct fan a[n];

  for(int i=0;i<n;i++)
  {
    cin>>a[i].name>>a[i].fq;
  }

  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(a[j].fq < a[j+1].fq)
        swap(a[j],a[j+1]);
    }
  }

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(a[j].fq == a[j+1].fq)
        {
          if(a[j+1].name < a[j].name)
            swap(a[j],a[j+1]);
        }
      else
        continue;
    }
  }
int i=0;
  while(t--)
  {
    cout<<a[i].name<<endl;
    i++;
  }


  return 0;
}
