#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> s;
	int n,val;
	int ch;
	cin>>n;
	while(n--)
	{
		cin>>ch;
		if(ch==1)
		{
			if(s.empty()) cout<<"No food"<<endl;
			else { cout<<s.top()<<endl; s.pop(); }
		}
		else if(ch==2)
		{
			cin>>val;
			s.push(val);
		}
	}
	return 0;
}