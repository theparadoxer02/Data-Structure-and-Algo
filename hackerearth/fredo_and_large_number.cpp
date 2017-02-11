#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> v,freq;
	int n,q,ch,i,j,countt,value;
	long long f;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>value;
		v.push_back(value);
	}

	for(int i=0;i<n;i++)
	{
		countt = count(v.begin(),v.end(),v[i]);
		freq.push_back(countt);
	}

	cin>>q;
	while(q--)
	{
		int count = 0;
		cin>>ch>>f;
		if(ch==0)
		{
			for(j=0;j<n;j++){
				if(freq[j]>=f){ cout<<v[j]<<endl;count++; break; }
			}
		}
		else if(ch==1)
		{
			for(j=0;j<n;j++){
				if(f==freq[j]){ cout<<v[j]<<endl;count++; break; }
			}
		
		if(count==0){
			cout<<0<<endl;
		}
	}
	return 0;
}