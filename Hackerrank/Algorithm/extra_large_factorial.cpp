#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include "BigIntegerLibrary.hh"
using namespace std;
int fact(int);

int main(){
    int n;
    cin >> n;
    cout<<fact(n);
}

BigInteger fact(int n)
{
  if(n==1) return 1;
  else
    return n * fact(n-1);
}