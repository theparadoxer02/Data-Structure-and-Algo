#include<iostream>
#include<fstream>
using namespace std;

int main() {
	int cost;
	char item[20];

	ifstream in("INVENTRY");

	if(!in){
		cout<<"Cannot open INVENTORY FILE.\n";
		return 1;
	}

	in >> item >> cost;
	cout<<item<<" "<<cost<<endl;
	in >> item >> cost;
	cout<<item<<" "<<cost<<endl;
	in >> item >> cost;
	cout<<item<<" "<<cost<<endl;

	in.close();
	return 0;
}