#include <iostream>

using namespace std;

int main()
{
	int n,q,l,r,x,ch;
	int arr[1000006];
	cin>>n>>q;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	while(q--)
	{
		cin>>ch;
		if(ch==1)
		{
			cin>>x;
			if(arr[x-1]==0)
				arr[x-1]=1;
			else
				arr[x-1]=0;
		}
		else if(ch==0)
		{
			cin>>l>>r;
			if([r-1]==0)
				cout<<"Even"<<endl;
			else
				cout<<"Odd"<<endl;
		}
	}
	return 0;
}