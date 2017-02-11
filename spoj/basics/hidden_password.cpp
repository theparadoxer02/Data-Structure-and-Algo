#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int convertBinaryToDecimal(int);

int main() {
	vector<string> v;
	int t,ascii;
	string str,string2,binary;
	cin>>t;
		while(t--) {
			int num;
			cin>>num;
			while(num--) {
				cin>>str;
				v.push_back(str);
			}
			cin>>string2;
			for(int i = 0; i < v.size(); i++) {
				for(int j =0; v[i][j] != '\0';j++ )  {
					ascii = (int) v[i][j];
					binary = convertBinaryToDecimal(ascii);
					cout<<binary<<" ";
				}
			}
		}
}

int convertBinaryToDecimal(int n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}