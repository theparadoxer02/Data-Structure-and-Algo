
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int>q[5],qu1;
	int n,k,a,temp,b;
	char ch;
	cin>>n;
	while(n--)
	{
		cin>>ch;
		if(ch=='E'){
			cin>>a>>b;
			if(q[a].empty())
				qu1.push(a);
			q[a].push(b);
		}
		else
		{
			temp = qu1.front();
			cout<<temp<<" "<<q[temp].front()<<endl;
			q[temp].pop();
			if(q[temp].empty())
				qu1.pop();
		}
	}
	return 0;
}