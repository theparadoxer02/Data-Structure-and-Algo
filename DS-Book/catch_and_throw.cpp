#include <iostream>
using namespace std;

void xtest(int test) {
	cout<<"Inside Xtest , test is "<<test<<"\n";
	if(test) throw test;
}

int main() {
	cout<<"Start"<<"\n";
	try {
		cout<<"Inside the try block\n";
		xtest(0);
		xtest(1);
		xtest(2);
	}

	catch(int i){
		cout<<"Caught an exception "<<i<<"\n";
	}
}