#include <iostream>
#include <string>

using namespace std;

int main() {
	string str1 = " This is first string ";
	string str2 = " This will be inserted ";

	str1.insert(6,str2);
	cout<<str1<<"\n\n";

	return 0;;
}