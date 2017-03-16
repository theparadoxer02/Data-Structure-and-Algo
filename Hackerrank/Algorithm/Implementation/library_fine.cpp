#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int da;
    int ma;
    int ya;
    cin >> da >> ma >> ya;
    int de;
    int me;
    int ye;
    cin >> de >> me >> ye;
    if(ya>ye)
    	cout<<10000;
    else if (ya<ye)
    	cout<<0;
	else
	{
		if(ma>me)
		{
	    	cout<<(ma-me)*500<<endl;
		}
		else if(ma<me)
			cout<<0;
	    else 
	    {	if(da>de)
	    		cout<<(da-de)*15<<endl;
	    	else
	    		cout<<0;
	    }
	  }

    return 0;
}
