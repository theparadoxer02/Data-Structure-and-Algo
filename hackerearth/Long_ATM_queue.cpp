#include <iostream>

using namespace std;

int main()
{
	int n,a[10001];
	int val,count=1;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	val = a[0];
	
	for(int j=1;j<n;j++)
	{
		if(val <=+ a[j]){ continue; }
		else { count++; }
		val = a[j];
		
	}
	cout<<count;
	return 0;
}