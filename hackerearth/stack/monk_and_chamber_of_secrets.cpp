#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

using namespace std;

int main()
{
	vector<int> v;
	deque<int> q1,q2;

	int n,x,val,maxim,k,index;
	cin>>n>>k;

	for(int i=0;i<n;i++)
	{
		cin>>val;
		v.push_back(val);
		q1.push_back(val);
	}

	for(int i=k;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			q2.push_back(q1.front());
			q1.pop_front();
		}
		maxim = *max_element(q2.begin(),q2.end());
		//cout<<"maxim: "<<maxim<<endl;
		//cout<<"Size: "<<v.size()<<" ";
		index = find(v.begin(), v.end(), maxim) - v.begin();
		cout<<"Index: "<<index+1<<" ";
		
		for(int k=0;k<q2.size();k++)
		{
			if(q2.front()!=maxim) {continue;}
			else
			{
				cout<<"\nFront: "<<q1.front();
				q1.push_back(q2.front() - 1);
				q2.pop_front();
			}
		}
	}

	return 0;
}