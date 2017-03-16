#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;
	string str;
	int val,maximum;
	map<char,int> M;
	int hgt[26];
	for(int i=0,character='a';i<26;i++)
	{
		cin>>val;
		M.insert(pair<char,int>(character,val));
		character++;
	}

	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		v.push_back(M.find(str[i])->second);
	}

	maximum = *max_element(v.begin(),v.end());

	cout<<(maximum*str.length());

	return 0;
}