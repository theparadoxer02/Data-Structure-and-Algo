#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ofstream out("INVENTRY");

	if(!out) { 
		cout << "Can not open inventry file\n";
		return 1; 
	}

	out<<"Radios "<< 39.95<<endl;
	out<<"Toasters "<< 219.95 <<endl;
	out<<"Mixers "<< 24.80 <<endl;

	out.close();
	return 0;
}