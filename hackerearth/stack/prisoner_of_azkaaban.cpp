#include <iostream>
#include <vector>

using namespace std;


int main()
{
	vector<int> v,x,y;
	int max,index,val,flag1,flag2;
	int n;
	cin>>n;
	for(int j=0; j<n; j++)
	{
		cin>>val;
		v.push_back(val);
	}

	x.push_back(-1);
	for(int i=1;i<n;i++)
	{	
		flag1=0;
		max = v[i];
		for(int j=i-1;j>=0;j--)
		{
			if(v[j]>max)
			{
				x.push_back(j+1);
				flag1=1;
				break;
			}
		}
		if(flag1 != 1) x.push_back(-1);
	}

	for(int i=0;i<n-1;i++)
	{
		flag2=0;
		max = v[i];
		for(int j=i+1;j<n;j++)
		{
			if(v[j]>max)
			{
				y.push_back(j+1);
				flag2=1;
				break;
			}	
		}
		if(flag2 != 1) y.push_back(-1);
	}
	y.push_back(-1);


	for(int k=0;k<n;k++) cout<<x[k]+y[k]<<" ";
	return 0;
}