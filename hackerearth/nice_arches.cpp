#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int t,count=0;
	string str;
	cin>>t;
	while(t--)
	{
		cin>>str;
		stack<char> s;
		for(int i=0;i<str.length();i++)
		{	
			char ch = str[i];
			if(!s.empty() && ch==s.top())
				s.pop();
			else
				s.push(ch);
		}

		if(s.empty())
			count++;
	}
	cout<<count<<endl;
	return 0;
}