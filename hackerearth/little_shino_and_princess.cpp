#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> temp;
	int maxim;
	int n,arr[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0; i<n; i++)
	{
		int temp[1000];
		for(int j=i;j<n;j++)
		{
			temp.push_back(arr[j]);
			maxim = max_element(temp.begin(),temp.end());
			cout<<maxim	;
		}
	}
	return 0;
}