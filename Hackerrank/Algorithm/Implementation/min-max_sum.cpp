#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	long max=0,min=0,val;
	vector<int> v;

	for(int i=0;i<5;i++)
	{
		cin>>val;
		v.push_back(val);
	}

	sort(v.begin(),v.end());

	for(int i=1;i<5;i++)
		max=max+v[i];

	for(int i=0;i<4;i++)
		min=min+v[i];

	cout<<min<<" "<<max;
}