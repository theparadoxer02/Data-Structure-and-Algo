#include <iostream>
using namespace std;

int main()
{
	int n;
	string s[1000];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>s[i];

	for(int i=0;i<n;i++)
	{
		if(i>0 && i<n-1)
		{
			for(int j=1;j<n-1;j++)
				{
					int val = s[i][j];
					if ((val>s[i][j-1]) && (val>s[i][j+1]) && (val>s[i-1][j]) && (val>s[i+1][j]) )
						s[i][j] = 'X';
				}
		}
		cout<<s[i]<<endl;
	}
	return 0;
}

