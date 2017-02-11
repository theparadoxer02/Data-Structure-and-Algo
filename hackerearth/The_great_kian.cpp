#include <iostream>

using namespace std;

int main()
{
	int n;
	long sum1 =0,sum2=0,sum3=0,val;
	int t;
	cin>>n;
	for(int i =0; i<=n; i++)
	{
		t = i%3;
		cin>>val;
		if(t==0)
			sum1 = sum1 + val;

		else if(t==1)
			sum2 = sum2 + val;

		else
			sum3 = sum3 + val;
	}
	cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
	return 0;
}