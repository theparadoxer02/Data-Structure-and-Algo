#include <iostream>
#include <vector>

using namespace std;

int bubble_sort( int A[ ], int n ) {
    int temp,count=0;
    for(int k = 0; k< n-1; k++) {
        for(int i = 0; i < n-k-1; i++) {
            if(A[ i ] > A[ i+1] ) {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int t,arr[100000];
    cin>>t;
    for(int k=0;k<t;k++)
    {
        cin>>arr[k];
    }
    cout<<bubble_sort(arr,t);
    return 0;
}
