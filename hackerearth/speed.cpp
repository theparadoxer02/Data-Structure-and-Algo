#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int v[100001];
	int t,n,count =1;
	int min;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}

		min = v[0];

		for(int j =1; j<n; j++)
		{
			if(v[j] < min)
			{
				min = v[j];
				count++;
			}
		}

	}
	cout<<count<<endl;
	return 0;
}