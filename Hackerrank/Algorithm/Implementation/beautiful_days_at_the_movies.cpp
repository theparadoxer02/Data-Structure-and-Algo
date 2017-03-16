#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,c=0,val,diff; cin>>i>>j>>k; string str; float res;
    for(int x=i;x<=j;x++){
        str=to_string(x);reverse(str.begin(),str.end());val=stoi(str);
        diff=abs(x-val); if(diff%k==0)c++;
       }
    cout<<c<<endl;
    return 0;
}