#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> s;
	string str;
	int g,n;
	while(g--)
	{
		cin>>n;
		cin>>str;
		if(s.top()=='_')
			{ count++; continue; }
		if(s.empty())
			s.push(ch);
		else if (s.top() == ch)
			s.pop();
	}
	return 0;
}