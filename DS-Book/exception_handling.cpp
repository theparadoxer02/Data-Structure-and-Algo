#include<iostream>
using namespace std;

void divide(double,double);

int main() {
	int i, j;
	do{
		cout<<"Enter number to divide(Enter 0 to stop): ";
		cin>>i;
		cout<<"Enter the value of j: ";
		cin>>j;
		divide(i,j);
	} while(i!=0);
	return 0;
}

void divide(double a, double b) {
	try {
		if(!b) throw b;
		cout<<" Result = "<<a/b<<"\n";
	}

	catch(double b) {
		cout<<"Can not divide by 0";
	}
}