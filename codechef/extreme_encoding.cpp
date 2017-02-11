#include <iostream>

using namespace std;


int main()
{
	int n,t,a[100001],b[100001],val,i=0,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		while(n--)
		{
			cin>>val;
			b[i++] = val>>(1<<(1<<(1<<1)));
			a[i++] = val & 0xFFFF;
			cout<<a[i-1]<<" ";
		}
		for(int j=0;j<n;j++)
			cout<<b[j]<<" ";
		cout<<endl;

	}
}
