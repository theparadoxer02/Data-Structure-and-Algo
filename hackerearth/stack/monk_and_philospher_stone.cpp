#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
	stack<int> s2;
	queue<int> s;
	int n,val,k=0;
	long x,sum,inst;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>val;
		s.push(val);
	}
	cin>>inst>>x;
	int res = -1;
	while(inst--)
	{
		string p;
		cin>>p;
		if(p == "Harry")
		{
			s2.push(s.front());
			sum = sum + s.front();
			s.pop();
			k++;
		}

		else if(p == "Remove")
		{
			sum = sum - s2.top();
			s2.pop();
		}
		if (sum != x && inst == 0) s2.push(-1);
		if(sum == x) { res = s2.size(); break; };
	}

	cout<<s2.size()<<endl;

	return 0;
}