#include <iostream>

using namespace std;

int isfactor(int);

int main()
{
	int m,n,max_a=0,min_b=100000;
	int a[100],b[100];
	int count=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(max_a<a[i])
			max_a=a[i];
	}

	for(int j=0;j<m;j++)
	{
		cin>>b[j];
		if(b[j]<min_b)
			min_b=b[j];
	}


 //isfactor()
	int isfactor(int num)
	{ 
	  int factor=1;
	    for(int i=0;i<m;i++)
	      if(b[i]%num!=0)
	          factor=0;
	    for(int i=0;i<n;i++)
	      if(num%a[i]!=0)
	          factor=0;
	    return factor;
	}

	for(int t=max_a;t<=min_b;t++)
		if(isfactor(t))
			count++;

	cout<<count<<endl;
	return 0;
}