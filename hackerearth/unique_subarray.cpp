#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	string s;
	int k,count = 0,maxc=0,lrange=0,rrange=0,len,temp;
	for(int i=0;i<n;i++)
		{ cin>>val;v.push_back(val); }
	len = s.length();
	for(int i=0;i<len;i++) {
		if(s[i+1]>s[i]) {
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