#include <iostream>
#include <stack>

using namespace std;

int main()

{
	stack<int> s;
	int t,n,first,id,prev;
	char ch;
	cin>>t;
	while(t--)
	{
		cin>>n>>first;
		s.push(first);
		for(int j=0;j<n;j++)
		{
			cin>>ch;
			if(ch == 'P')
			{
				prev = s.top();
				cin>>id;
				s.push(id);
			}
			else if(ch == 'B')
			{
				s.pop();
			}
		}
		cout<<"Player "<<s.top()<<endl;
	}
	return 0;
}