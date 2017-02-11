#include <iostream>
#include <vector>
#include <algorithm>    // std::rotate

using namespace std;

int main()
{
	vector<int> q;
	int t,k,n,val;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>val;
			q.push_back(val);
		}

		rotate(q.rbegin(),q.rbegin()+k,q.rend());

		vector<int>::iterator iter;
		for(iter = q.begin(); iter != q.end();iter++ )
		{
			cout<<*iter<<" ";
		}
		cout<<endl;
	}
	return 0;
}