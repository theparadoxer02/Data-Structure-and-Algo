#include <iostream>
#include <math.h>
using namespace std;
int isPerfect(int);

int main()
{
	int t,a,b,count;
	cin>>t;
	while(t--)
	{
		count = 0;
		cin>>a>>b;
		count = floor(sqrt(b)) - ceil(sqrt(a)) +1;
		cout<<count<<endl;
	}
	return 0;
}
