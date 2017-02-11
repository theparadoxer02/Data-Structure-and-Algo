#include <iostream>

using namespace std;
int main()
{
	int n,pre,now,val,a[10001];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	pre = a[0];
	for(int j=1;j<n;j++)
	{
		now = a[j];
		if(val>0)
		{
			if(pre <= now)
			{
				now = now - pre;
			}
			else break;
		}
		pre = now;
	}
	if(pre == 0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}