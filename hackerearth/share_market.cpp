#include <iostream>
using namespace std;

int main()
{
	int w[1000],x[10000],c[10000],k;
	int t,n,cost,loop,sum,flag=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>w[i];
		}
		cin>>k;
		for(int i=0;i<k;i++)
		{
			cin>>x[i];
		}
		for(int i=0;i<k;i++){
			cin>>c[i];
		}
//Done taking inputs now comes the main part

		for(int i=0;i<k;i++)
		{
			cost = c[i];
			loop = x[i];

			for(int j=0;j<(n-loop+1);j++)
			{
				sum = 0;
				for(int l=j;l<(j+loop);l++)
				{
					sum = sum + w[l];
				}
				if(sum == cost){ cout<<"Yes"<<endl; flag=1; break; }
				else flag=0;
			}
			if(flag != 1 )
				cout<<"No"<<endl;
		}

	}
	return 0;
}