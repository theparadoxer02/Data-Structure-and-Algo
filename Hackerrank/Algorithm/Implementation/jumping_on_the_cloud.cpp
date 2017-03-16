#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n,k,a[10000],E=100;
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int index = 0;
	do
	{	
		if(a[index]==1)
			E = E-2;
		if((index+k) > n-1)
			index = (index + k)%n;
		else index = index + k;
		E--;
	}
	while(index != 0);
	cout<<E;
	return 0;
}