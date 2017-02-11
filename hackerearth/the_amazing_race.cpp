#include <iostream>

using namespace std;

int main()
{
	int t,count1,count2,val;
	long n;
	int c1[100000],c2[100000];
	int a[100000];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		for(int i=0,k=0;i<n-1;i++)
		{
			count1=0;
			c1[n-1]=0;
			for(int j=i+1;j<n;j++)
			{
				if(a[j]>=a[i]) { count1++; break; }
				else { count1++; }
			}
			c1[k]=count1;k++;
		}

		for(int i=1,k=1; i<n; i++,k++)
		{
			count2=0;
			c2[0]=0;
			for(int j=i-1;j>=0;j--)
			{
				if(a[j]>=a[i]) { count2++; break; }
				else { count2++; }
			}
			c2[k]=count2;
		}
		int max = 0,index;

		for(int k=0;k<n;k++)
		{
			int val = (c1[k]+c2[k])*(k+1);
			if(max<val)
				{
					max = val;
					index = k+1;
				}
		}

		cout<<index<<endl;
	}
	return 0;
}