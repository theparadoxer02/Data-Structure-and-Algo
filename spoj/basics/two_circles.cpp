#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int t;
	float d,r;
	cin>>t;
	while(t--) {
		int x1,y1,r1,x2,y2,r2;
		cin>>x1>>y1>>r1>>x2>>y2>>r2;
		 d = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
		 r = sqrt(pow((r2-r1),2));

		if(d<=r) {
			if(d==r) cout<<"E";
			else cout<<"I";
		}
		else cout<<"O";
		cout<<endl;
	}
	 return 0;
}