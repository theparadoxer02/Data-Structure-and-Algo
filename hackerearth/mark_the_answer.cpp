#include <iostream>
#include <vector>

using namespace std;

int main()
{	
	int n,x,score = 0,val;
	cin>>n>>x;
	vector<int> v(n);
	int option = 1;

	for(int j=0;j<n;j++)
	{	
		cin>>val;
		if(val>x){
			if(option<0) {break;}
			else option--;
		}
		else{
			score++;
		}
	}
	cout<<score<<endl;
	return 0;
}