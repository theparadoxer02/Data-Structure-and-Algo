#include<iostream>
using namespace std;

int main()
{
	string word;
	int k;
	cin>>word>>k;
	int len = word.length();
	for(int j=0;j<len;j++)
	{
		if(k<=0)
			break;

		if(word[j] != '9')
		{
			word[j] = '9';
			k--;
		}
	}
	cout<<word;
	return 0;
}