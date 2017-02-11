#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{	
	set<int> mySet;
	int data[10001],n,val;
	cin>>n;
	for(int i = 0;i<n;i++)
	{
		cin>>data[i];
	}

	int max = *max_element(data,data+n);
	int min = *min_element(data,data+n);

	sort(data,data+n);

	for(int i=0;i<n;i++)
	{
		mySet.insert(data[i]);
	}
	
	set<int>::iterator p1,p2;
	p1 = mySet.begin();
	p2 = mySet.end();

	if(min == *p1 && *p2 == *p1+n-1)
		cout<<"YES";
	else
		cout<<"NO";
		return 0;
}