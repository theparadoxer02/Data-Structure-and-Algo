#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n,q,ch,x,y,lastans=0,index,sq_no;
	cin>>n>>q;
	vector<int> v[n];
	while(q--)
	{
		cin>>ch>>x>>y;
		if(ch == 1)
		{
			sq_no = (x^lastans)%n;
			v[sq_no].push_back(y);
		}
		else if( ch == 2)
		{
			sq_no = (x^lastans)%n;
			index = y%v[sq_no].size();
			lastans = v[sq_no][index];
			cout<<lastans;
		}
	}

	return 0;
}
