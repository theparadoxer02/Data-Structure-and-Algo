#include <iostream>
#include <cmath>
#include <limits.h>

using namespace std;

int main()
{
	int n,d=INT_MAX,a[10000],flag=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((a[i]==a[j])&& (j!=i))
			{
				int t = abs(j-i);

				if(d>t)
				{
					flag = 1;
					d = j - i;
				}
			}
		}
	}
	if(flag == 0)
		cout<<-1;
	else
		cout<<d;
	return 0;
}