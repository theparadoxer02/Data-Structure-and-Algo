#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string s;
	int count = 0,len;
	cout<<"Enter the code:  ";
	cin>>s;
	cout<<"01111110";
	len = s.size();
	for(int i = 0;i<len;i++){
		if(s[i]=='1')
			count++;
		if(count==6)
		{
			s[i+1] = '0';
		}
	}

	for(int j =0; j<len;j++){
		cout<<s[j];
	}
	cout<<"01111110"<<endl;
	return 0;
}