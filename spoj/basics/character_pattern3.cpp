#include <iostream>
using namespace std;

int main() {
	int t;
	int row,col;
	cin>>t;
	while(t--) {
		cin>>row>>col;
		for(int i=0;i<=row*3;i++){
			if(i%3==0){ 
						for(int k=0;k<=col*3;k++){
												 cout<<"*";
												} 
					cout<<endl;continue;
			}
			
			for(int j=0; j<=col*3;j++) {
					if(j%3==0) {
						cout<<"*";
					}
				else {cout<<".";}
			}
			cout<<endl;
		}
		cout<<endl;
	}
	cout<<endl;
}