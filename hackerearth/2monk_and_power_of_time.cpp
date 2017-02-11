#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> calling;
	list<int> ideal;
	int n,val,t=0,check;
	cin>>n;
	for(int i=0 ; i<n; i++)
	{
		cin>>val;
		calling.push_back(val);
	}

	for(int i=0 ; i<n; i++)
	{
		cin>>val;
		ideal.push_back(val);
	}

	while(n--)
	{	
		if(calling.front()!=ideal.front())
		{
			while(calling.front() != ideal.front())
			{
				int val = *calling.end();
				calling.pop_front();
				calling.push_back(val);
				t = t+ 1;
			}
		}
		else{
			calling.pop_front();
			ideal.pop_front();
			t = t+1;
		}
	}

	cout<<t+1;
}

