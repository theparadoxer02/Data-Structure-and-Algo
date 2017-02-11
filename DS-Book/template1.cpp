#include <iostream>
using namespace std;

template <class X> void swasparg(X &a, X &b) {
	X temp;
	temp = a;
	a = b;
	b = a;
}


int main() {
	int i = 20, j =30;
	float x = 20.5, y = 40.5;
	char a ='a', b ='b';
	cout<<"Original i = "<<i<<" j = "<<j<<"\n";
	cout<<"Original x = "<<x<<" y = "<<y<<"\n";
	cout<<"Original a"<<a<<" b = "<<b<<"\n";
	
	swasparg(i,j);
	swasparg(x,y);
	swasparg(a,b);

	cout<<"Original i = "<<i<<" j = "<<j<<"\n";
	cout<<"Original x = "<<x<<" y = "<<y<<"\n";
	cout<<"Original a"<<a<<" b = "<<b<<"\n";

	return 0;
}