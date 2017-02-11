#include <iostream>
using namespace std;

int main() {
	int t;
	int row,col;
	cin>>t;
	while(t--) {
		cin>>row>>col;
		for(int i=0;i<row;i++){
			if(i==0||i==row-1){for(int j=0; j<col;j++) cout<<"*";cout<<endl;continue;}
			for(int j=0; j<col;j++) {
					if(j==0||j==col-1){cout<<"*";}
					else {cout<<".";}
			}
			cout<<endl;
		}
	}
}