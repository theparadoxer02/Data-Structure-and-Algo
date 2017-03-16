#include <iostream>

using namespace std;

int main()
{	
	int count=0,t=0;
	int n,k;
	int arr[1000];
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>arr[i];

	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			t++;
			if(((arr[i]+ arr[j])%k)==0)
				{count++; break;}
		}
	}
	cout<<t<<endl;
	return 0;
}