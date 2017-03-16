#include <iostream>
using namespace std;

int main()
{
	int n,d,count = 0;
	int a[1000];
	cin>>n>>d;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			if((a[j]-a[i])==d) 
			{
				for(int k=j+1;k<n;k++)
					if(a[k] - a[j] == d) 
						count++;
				
			}
		}
	}

	cout<<count<<endl;
	return 0;
}