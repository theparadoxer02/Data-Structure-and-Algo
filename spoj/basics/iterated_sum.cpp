#include <iostream>

using namespace std;

int main() {
	int sum=0,a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++) {
		sum = sum + i*i;
	}
	cout<<sum;
	return 0;
}