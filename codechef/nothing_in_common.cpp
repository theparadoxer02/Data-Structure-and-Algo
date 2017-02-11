#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<int> v;
	int v1[10001],v2[10001];

	int t,val;
	int n,m;
	cin>>t;
	while (t--)
	{
		int count = 0;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			cin>>v1[i];
		}

		for(int j=0;j<m;j++)
		{
			cin>>v2[j];
		}

		 vector<int>::iterator it;
		 it = set_intersection (v1, v1 + n, v2, v2+ m, v.begin());
		 v.resize(it - v.begin());

		cout<<v.size()<<endl;
	}
return 0;
}