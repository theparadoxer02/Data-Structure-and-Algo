#include <iostream>
using namespace std;
int minimum(int [],int ,int);

int main()
{
	int n,arr[100001],t,i,j;
	cin>>n>>t;
	for(int k=0;k<n;k++)
		cin>>arr[k];

	while(t--)
	{
		cin>>i>>j;
		int minv = minimum(arr,i,j);
		cout<<minv<<endl;
	}
	return 0;
}

int minimum(int arr[],int i, int j)
{
	int min = arr[i];
	for(int k=i;k<=j;k++)
		if(min>arr[k])
			min = arr[k];
	return min;
}