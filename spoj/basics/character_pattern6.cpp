#include <iostream>

using namespace std;

int main()  {
	int t ;
	int row,col,h,w;
	cin>>t;
	while(t--) {
		cin>>row>>col>>h>>w;

		row = row*(h+1) + h;
		col = col*(w+1) + w;
		h = h+1;
		w = w+1;
		for(int i=1;i<=row;i++) {
			for(int j=1;j<=col;j++) {
				if(i%h==0) {if(j%w==0){cout<<"+";}else cout<<"_"; }
				else { if(j%w==0){cout<<"|";} else cout<<"."; }
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}