#include <iostream>
using namespace std;

int main()
{
	int s,t,a,b,m,n,app=0,org=0,val;
	cin>>s>>t;
	cin>>a>>b;
	cin>>m>>n;
	s=s-a;
	t=t-a;
	b=b-a;
	a=0;
	for(int i=0;i<m;i++)
	{
		cin>>val;
		if(val>=s && val <=t)
			app++;
	}

	for(int j=0;j<n;j++)
	{
		cin>>val;
		if((b+val)>=s && (b+val)<=t)
			org++;
	}
		
	cout<<app<<endl;
	cout<<org<<endl;
	return 0;
}