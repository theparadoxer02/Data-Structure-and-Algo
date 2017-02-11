#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[1000001],t,min,mycount=0,n;
	cin>>t;
	while(t--)
	{	
		cin>>n;
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}

		min = *min_element(a,a+n);

		mycount = count (a, a+n,min);

		if(mycount%2==1) 
			cout<<"Lucky"<<endl;
		else
			cout<<"Unlucky"<<endl;
	}
	return 0;
}