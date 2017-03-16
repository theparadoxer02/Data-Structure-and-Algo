#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;
	int n,item,counting,val;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>val;
		v.push_back(val);
	}

	while(!v.empty())
	{
		item = v[0];
		counting=0;
		for(int i=0;v.size();i++)
		{
			if(item==v[i])
			{
				counting++;
				v.erase(v.begin()+i);
			}
		}
		cout<<counting<<""<<endl;
	}

	return 0;
}