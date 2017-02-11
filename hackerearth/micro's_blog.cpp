#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int row,col;
	int a[10001][21];
	int exor,max=0;
	int n,m;
	max = 0;
	cin>>n>>m;

	for(int i =0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>a[i][j];
		}
	}

	for(int i =0; i<n; i++)
	{
		exor = 0;
		for(int j=0; j<m; j++)
		{
			exor = exor^a[i][j];
			if(max<exor)
				max = exor;
		}
	}

	for(int j =0; j<m; j++)
	{
		exor = 0;
		for(int i=0; i<n; i++)
		{
			exor = exor^a[i][j];
			if(max<exor)
				max = exor;
		}
	}

	cout<<max<<endl;

	return 0;
}