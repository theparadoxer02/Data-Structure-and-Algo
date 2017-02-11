#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n,val,maximum;
	stack<int> s;
	int count = 0;
	cin>>n;
	while(n--)
	{
		cin>>val;
		if(val>0)
		{
			if(s.empty())
				s.push(val);
			else
				break;

		}
		else if(val<0)
		{	
			if(s.empty()) continue;
			else if(s.top()==((-1)*val))
				{ s.pop(); count = count+2; }
			else 
				break;
		}
	}
	cout<<count<<endl;
	return 0;
}