#include <iostream>

using namespace std;

int main()
{
	int a[100001],b[100001],c[100001],n,val;

	cin>>n;
	for(int i = 0; i<n; i++)
	{
		cin>>a[i];
	}

	for(int j = 0; j<n; j++)
	{
		cin>>val;
		c[j] = a[j] + val;
		cout<<c[j]<<" ";
	}
	cout<<endl;
	return 0;
}