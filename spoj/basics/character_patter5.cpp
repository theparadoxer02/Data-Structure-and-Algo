#include <iostream>
using namespace std;

int main() {
	int t,lines,columns,s;
	cin>>t;
	while(t--) {
		cin>>lines>>columns>>s;

		lines = (lines+1) * s + 1;
		columns = (columns+1) * s + 1;

		for(int i=0;i<lines;i++) {
			for(int j=0;j<=columns;j++ ) {
				if(i%s==0) cout<<"*";
				else if (i==j || ((i-j)%(s+1)==0 && ((i-j)/(s+1)%2==0))) cout<<"\\";
				else if ((i+j)%(s)==0 && ((i+j)/(s+1)%2==0)) cout<<"/";
				else cout<<".";
			}
			cout<<endl;
		}
	}
}