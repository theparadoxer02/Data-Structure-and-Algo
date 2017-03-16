#include <iostream>

using namespace std;

int main()
{
	int t,s,m,n,output;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>s;
		output=(n+s-1)%m;
		if(output==0)
		{
			cout<<n<<endl;
		}
		else
			cout<<output<<endl;
	}
	return 0;
}