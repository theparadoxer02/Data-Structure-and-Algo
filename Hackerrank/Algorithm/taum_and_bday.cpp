#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long b,w,x,y,z;
		cin>>b>>w;
		cin>>x>>y>>z;
		if(x+z<y)
			cout<<b*x+w*(x+z)<<endl;
		else if(y+z<x)
			cout<<b*(y+z)+w*y<<endl;
		else
			cout<<b*x+w*y<<endl;
	}
	return 0;
}