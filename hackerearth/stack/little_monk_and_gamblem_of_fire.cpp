#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> x,y;
	int n,a,b;
	char ch;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ch;
		if(ch=='E') 
		{
			cin>>a>>b;
			x.push(a);
			y.push(b);
		}
		else if(ch=='D'){
			cout<<x.front()<<" "<<y.front()<<endl;
			x.pop();
			y.pop();
		}
	}

	return 0;
}