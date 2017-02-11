#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	string s;
	int len;
	cin>>s;
	len = s.length();
	int row = floor(sqrt(len));
	int column = ceil(sqrt(len));
	for(int i=0;i<column;i++)
	{	
		for(int i=j;j<row;j=j+column)
		{	
			if(s[j] != '\0')
				cout<<s[j];
		}
		cout<<" ";
	}
	return 0;
}
