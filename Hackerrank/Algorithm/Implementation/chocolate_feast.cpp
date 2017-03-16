#include <iostream>
using namespace std;

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,c,m;
		cin>>n>>c>>m;
		int chocolate,wrapper,can_take_more,left;
		chocolate = n/c;
		wrapper = chocolate;
		while(wrapper>=m)
		{
			can_take_more = wrapper/m;
			left = wrapper%m;
			chocolate = chocolate + can_take_more;
			wrapper = can_take_more + left;
		}
		cout<<chocolate<<endl;
	}
	return 0;
}