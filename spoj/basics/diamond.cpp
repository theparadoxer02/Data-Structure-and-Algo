#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--) {
		cin>>n;
		for(int i=1;i<=n*n;i++) {
			for(int j =1;j<=n*n;j++) {
				if(((i+j)%n==0)||((i+j)%n)==1) {cout<<"*";}
				else {cout <<".";}
			}
			cout<<endl;
		}
	}
}