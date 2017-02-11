#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	map<string,string> directory;

	string name,phone;

	for(int i =0 ;i <3; i++) {
		cout<<"Enter name and phone number: ";
		cin>>name>>phone;
	directory.insert(pair <string, string>("tom","123-456-789"));
	//directory.insert(pair <string, string>("rahul","456-789-1011"));
	}
	string s;

	cout<<"Enter the name:  ";
	cin>>s;

	map<string, string> :: iterator p;

	cout<<"The directory is: "<<endl;
	for(int i=0; i<3;i++){
		cout<<" name = "<<p->first<<" phone = "<<p->second;
	}

	p = directory.find(s);
	if(p != directory.end()){
		cout<<"Phone number: "<<p->second<<endl;
	}
	else
		cout<<"name not in directory\n";

	return 0;

}
