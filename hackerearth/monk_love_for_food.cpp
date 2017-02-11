#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> s;
	int t,type,price;
	cin>>t;
	while(t--)
	{
		cin>>type;
		if(type == 1)
		{
			if(!s.empty()) { cout<<s.top(); s.pop(); }
			else { 
				cout<<"No Food"<<endl; 
			}
		}
		else if(type == 2)
		{
			cin>>price;
			s.push(price);
		}
		cout<<endl;
	}
	return 0;
}