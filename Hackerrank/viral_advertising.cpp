#include <iostream>

using namespace std;

int main()
{
	int liked,totalreached=5;
	int n,sum=0,m;
	cin>>n;
	while(n--)
	{
		m = totalreached/2;
		totalreached = m*3;
		sum = sum+m;		
	}
	cout<<sum;
	return 0;
}