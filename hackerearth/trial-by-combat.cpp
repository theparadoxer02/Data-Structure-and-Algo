#include <iostream>

using namespace std;

int main()
{
	int t,n,hr,a[100001],b[100001];
	cin>>t;
	while(t--)
	{

		cin>>n>>hr;
		for(int i=0; i<n; i++)
			{
				cin>>a[i];
			}
		while(hr--)
		{
			if(a[1]==1)
				b[0] = 1;
			else
				b[0]=0;
			if(a[n-2]==1)
				b[n-1]= 1;
			else
				b[n-1]=0;

			for(int j=1; j<n-1; j++)
			{
				if((a[j-1]== 1) && (a[j+1] ==1))
					b[j]=1;
				else
					b[j]=0;
			}

			for(int j=0; j<n;j++)
				a[j] = b[j];
		}

		for(int j=0; j<n;j++)
		{
			cout<<b[j]<<" ";
		}
		cout<<endl;
	}
	return 0; 
}