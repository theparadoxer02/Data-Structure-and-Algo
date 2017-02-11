#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main() {
	vector<char> v(10);
	int i;

	cout<<"size = "<<v.size()<<endl;

	for (i=0; i<10;i++) v[i] = i + 'a';

	cout<<"Current elements are"<<endl;

	for(i=0;i,i<v.size();i++) cout<<v[i]<<" ";
	cout<<"\n\n";

	for(i=0;i<10;i++) v.push_back( i + 'a' + 10 );

	cout<<"Size now: "<<v.size()<<"\n";

	cout << "the elements are now" <<endl ;

	for(i=0;i<v.size();i++) cout<<v[i]<<" ";

	cout<<"\n\n";
	
	for(i=0;i<v.size();i++) v[i] = toupper(v[i]);

	cout<<"Modified content: ";
	
	for(i=0;i<v.size();i++) cout<<v[i]<<" ";

	cout<<"\n\n";

}