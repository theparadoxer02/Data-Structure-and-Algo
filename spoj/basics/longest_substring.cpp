#include <iostream>
#include <string.h>

using namespace std;

int main() {
	
	string s;
	int k,count = 0,maxc=0,lrange=0,rrange=0,len,temp;
	cin>>s;
	len = s.length();
	for(int i=0;i<len;i++) {
		if(s[i+1]>=s[i]) {
			temp = i+1;
			count++;
		}
		else if(maxc<count){
			rrange = temp;
			lrange = temp - count;
			maxc = count;
			count = 0;
		}
		else {count = 0;}
	}
	cout<<" Lrange: "<<lrange<<" RRange: "<<rrange<<endl;
	cout<<"Longest substring: ";
	for(int i=lrange;i<=rrange;i++) {
		cout<<s[i];
	}
	cout<<endl;
	return 0;
}