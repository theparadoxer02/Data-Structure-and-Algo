#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int m,n,val;
	vector<int> v;
	cin>>n>>m;
	for(int i =0;i<m;i++)
	{
		cin>>val;
		v.push_back(val);
	}
	v.push_back(n-1);
	int maxim = v[0]/2;
	for(int i=0;i<m;i++)
	{
		int dist = (v[i+1] - v[i])/2;
		if(dist>maxim)
			maxim = dist;
	}

	cout<<maxim;
}