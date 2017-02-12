#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string s,str;
	long n,ct=0;
	cin>>s;
	cin>>n;
	int val=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='a')
			ct++;
	}
	int len = s.length();
/*	cout<<len<<" ";*/
	long t = n/len;
	//cout<<t<<" ";
	int left = n%len;
	for(int i=0;i<left;i++)
		if(s[i]=='a')
			val++;
	cout<<ct*t+val;
	return 0;
}