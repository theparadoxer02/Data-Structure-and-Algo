#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int n=9,y=4;
	while(n--)
	{
		v.push_back(n);
	}

/*	while(y--)
	{
		v.pop_back();
	}*/
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it;
	}
	return 0;
}