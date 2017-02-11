#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> calling;
	queue<int> ideal;
	int n,val,t=0,check;
	cin>>n;
	for(int i=0 ; i<n; i++)
	{
		cin>>val;
		calling.push(val);
	}

	for(int i=0 ; i<n; i++)
	{
		cin>>val;
		ideal.push(val);
	}
	while(!ideal.empty())
	{
		int val = calling.front();
		if(val != ideal.front())
		{
			int data = calling.front();
			calling.push(data);
			calling.pop();
			t = t+1;
		}
		else
		{
			t = t+1;
			calling.pop();
			ideal.pop();
		}
	}
	cout<<t<<endl;
	return 0;
}
