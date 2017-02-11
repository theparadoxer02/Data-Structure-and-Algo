#include <iostream>
using namespace std;

int main()
{
	int c,d,l,t;
	cin>>t;
	while(t--)
	{
		cin>>c>>d>>l;
		if((c<d)||(c==d))
			if(d*4<=l)
				cout<<"Yes"<<endl;
			else
				cout<<"No";
		else if(c<d)
			if((d*4+(c-d)*4) < l)
				cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}

	return 0;
}
/*3
1 1 8
1 1 4
1 1 2*/