#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> v1;
	vector<int> v2;

	int n1,n2,val,flag;
	cin>>n1;

	while(n1--) {
		cin>>val;
		v1.push_back(val);
	}

	cin>>n2;

	while(n2--) {
		cin>>val;
		v2.push_back(val);
	}

	vector<int>::iterator p1;
	vector<int>::iterator p2;

	for(p1=v1.begin();p1!=v1.end();p1++) {
		flag = 0;
		for(p2=v2.begin();p2!=v2.end();p2++) {
			cout<<v1[p1];
		}
	}

	return 0;
}
	

