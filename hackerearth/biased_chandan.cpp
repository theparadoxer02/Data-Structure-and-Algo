#include <iostream>
#include <stack>
using namespace std;


int main()
{
	stack<int> s;
	int t;
	int sum = 0,top,val;
	cin>>t;
	while(t--)
	{	
		cin>>val;
		if(val!=0)
		{
			s.push(val);
			sum = sum + val;
		}
		else
		{
			top = s.top();
			sum = sum - top;
			s.pop();
		}

	}
	cout<<sum<<endl;
	return 0;
}