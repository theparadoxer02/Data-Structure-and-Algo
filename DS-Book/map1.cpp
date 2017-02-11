#include <iostream>
#include <map>

using namespace std;

int main() {
	
	int value;
	char name[10];

	map <char*, int> mymap;
	map<char*,int>::iterator it;

	for(int i=0; i<3; i++) {
		cin>>name;
		cin>>value;
		mymap.insert(pair<char*,int>(name,value));
	}

	cout<<mymap.size();
	for(it=mymap.begin(); it != mymap.end(); ++it) {
		cout<<it->first<<" "<<it->second;
	}
	return 0;
}

