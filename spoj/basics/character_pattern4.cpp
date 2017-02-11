#include <iostream>
using namespace std;

int main() {
	int t;
	int row,col,d1,d2;
	cin>>t;
	while(t--) {
		cin>>row>>col>>d1>>d2;
		d1 = d1 + 1;
		d2 = d2 + 1;
		for(int i=0;i<=row*d1;i++) {
			for(int j=0;j<=col*d2;j++) {
				if(i%d1 ==0 || j%d2==0) cout<<"*";
				else cout<<".";
			}
			cout<<endl;
		}
	cout<<endl;
	}
}