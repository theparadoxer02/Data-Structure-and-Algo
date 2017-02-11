#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,n;
    int flag = 0;
    cin>>t;
    while(t--) {
      cin>>n;
      for(int i =0 ; i<(int)sqrt(n); i++) {
        if(n%i == 0) {
          flag = 1;
          break;
        }
      }
      if(flag == 1) { cout<<"Not prime"; }
      else { cout<<"Prime"; }
    }
    return 0;
}
