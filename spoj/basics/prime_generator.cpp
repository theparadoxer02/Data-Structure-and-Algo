#include <iostream>
#include <math.h>
using namespace std;
int isprime(int);

int main() {
	// your code goes here
	int t,n1,n2;
	cin>>t;
	while(t--){
		cin>>n1>>n2;
		for(int i=n1;i<=n2;i++) {
			if(i==1) 
				continue;
			else
				if(isprime(i)==0) { cout<<i<<endl; }
		}
	}
	return 0;
}

 int isprime(int num){
 	int i,flag =0;
 	for(i=2; i<=(int)sqrt(num); ++i)
    {
        // condition for nonprime number
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
 	return flag;
 }