#include<iostream>

using namespace std;

class c1 {
	int i;
	public:
		c1() {i = 0;}
		c1(int j) {i =j;}
		int get_i() {return i;}
	};

int main() {
	c1 ob[3] = {1,2,3};
	c1 *p;
	int i;
	p = ob;
	for(i =0; i<3;i++) {
		cout<<p->get_i()<<"\n";
		p++;
	}
	return 0;
}

