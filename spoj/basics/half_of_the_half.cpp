#include <iostream>
using namespace std;

int main() {
	int t,len;
	string s1;
	cin>>t;
	while(t--) {
		cin>>s1;
		len = s1.length();
		for(int j=0;j<int(len/2);j=j+2) {
			cout<<s1[j];
		}
		cout<<endl;
	}
	return 0;
}