#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t,val,n,x;
	int a[1000001];
	long long sum;
	cin>>t;
	while(t--)
	{
		int flag=0;
		cin>>n>>x;
		for(int i = 0; i<n; i++)
		{
			cin>>a[i];
		}

		for(int i=0;i<n;i++) 
		{	
			sum =  0;
			for(int j=i;j<n;j++) 
			{
				sum = sum + a[j];
				if(sum==x){  flag=1; break; }
				else if(sum>x) { break; }
			}

			if(flag == 1) break; 
		}

		if(flag==1) 
			cout<<"YES"<<endl;  
		else 
			cout<<"NO"<<endl;
	}
	return 0;
}