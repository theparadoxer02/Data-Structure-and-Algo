#include <iostream>

using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int h=1;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			if(i%2!=0)
				h = h*2;
			else
				h = h + 1;
		}

		cout<<h<<endl;
	}
	return 0;
}