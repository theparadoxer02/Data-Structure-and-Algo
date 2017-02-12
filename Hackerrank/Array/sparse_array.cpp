#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<string> v;
	int n,q;
	string val;
	cin>>n;
	while(n--)
	{
		cin>>val;
		v.push_back(val);
	}
	cin>>q;
	while(q--)
	{
		cin>>val;
		cout<<count(v.begin(),v.end(),val)<<endl;
	}

	return 0;
}