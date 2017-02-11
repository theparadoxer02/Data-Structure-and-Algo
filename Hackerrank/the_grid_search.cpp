#include <iostream>
using namespace std;

int main()
{
	int t,r1,r2,c1,c2,flag;
	string g[100],p[100];
	cin>>t;
	while(t--)
	{
		cin>>r1>>c1;
		for(int i=0;i<r1;i++)
			cin>>g[i];
		cin>>r2>>c2;
		for(int i=0;i<r2;i++)
			cin>>p[i];

		for(int i=0;i<=r1-r2;i++)
		{
			for(int j=0;j<=c2-c1;j++)
			{
				cout<<g[i][j]<<" "<<p[0][0]<<endl;
				cout<<"hoo";
				/*if(g[i][j]=p[0][0])
				{
					int flag = 1;
					for(int k=0;k<r2;k++)
					{
						for(int r=0;r<c2;r++)
							if(g[k+i][r+j] != p[k][r])
								flag = 0;
					}
				}*/
			}
		}
		//if(flag == 1)
		//	cout<<"Yes"<<endl;
		//else
		//	cout<<"NO"<<endl;
	}
	return 0;
}