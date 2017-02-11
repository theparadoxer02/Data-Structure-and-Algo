#include <iostream>
using namespace std;

int main() {
	int t;
	int row,col;
	cin>>t;
	while(t--) {
		cin>>row>>col;
		for(int i=0;i<row;i++){
			for(int j=0; j<col;j++) {
				if((i+j)%2==0)
					cout<<"*";
				else
					cout<<".";
			}
			cout<<endl;
		}
	}
}