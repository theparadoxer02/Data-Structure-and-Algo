#include <iostream>
#include <vector>

using namespace std;

int bubble_sort(vector<int>& a,int n,int l)
{
  int flag = 0,sum;
  for(int i=0;i<n;i++)
  {
    sum = 0;
    for(int k=0;k<n-i;k++)
    {
      sum = sum + a[k];
      if(sum == l)
        {flag = 1;break;}
    }
    cout<<"sum = "<<sum<<endl;
  }
  return flag;
}

int main()
{
  int t,n,l,x1,x2,d;
  vector<int> v;
  cin>>t;
  while(t--)
  {
    cin>>n>>l;
    cout<<"l= "<<l<<endl;
    for(int z=0;z<n;z++)
    {
        cin>>x1>>x2;
        d = x2 - x1;
        v.push_back(d);
    }
    int result = bubble_sort(v,n,l);
    if(result==0)
      cout<<"No"<<endl;
    else
      cout<<"Yes"<<endl;
  }
  return 0;
}
