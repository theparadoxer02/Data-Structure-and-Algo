#include <iostream>
#include <map>

using namespace std;

int main()
{
	int g;
	int n;
	string str;
	map<char, int> map;
	while(g--)
	{
		cin>>n;
		cin>>str;
		for(int i=0;i<n;i++)
			char ch = str[i];
		if(map.find(ch)==map.end())
			map.insert(ch,1)
		else
		{
			map[ch].second++;
		}
	}
	return 0;
}