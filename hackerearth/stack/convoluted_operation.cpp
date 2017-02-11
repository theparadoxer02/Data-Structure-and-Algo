#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> s;
	int choice ,val,count=0,k,x,n,value;
	int number;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		cin>>choice;
		if(choice==1)
		{
			cin>>val;
			s.push_back(val);
		}
		if(choice ==0)
		{
			if(!s.empty()) s.pop_back();
		}

		if(choice==2)
		{
			cin>>number>>k>>x;
			vector<int>::iterator it;
			int count = 0;
			for(it=s.begin();it!=s.end();it++)
			{
				if(*it>value) count++;
			}
			cout<<count;

		}
	}
	return 0;
}