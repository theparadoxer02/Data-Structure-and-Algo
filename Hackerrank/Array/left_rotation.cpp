#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> q;
	int n,r,val;
	cin>>n>>r;
	for(int i=0;i<n;i++)
	{
		cin>>val;
		q.push_back(val);
	}

	for(int i=0;i<r;i++)
	{
		val = q.front();
		q.pop_front();
		q.push_back(val);
	}

	deque<int>::iterator i;
	for (i = q.begin(); i != q.end() ;++i)
		cout<<*i<<" ";

	return 0;
}