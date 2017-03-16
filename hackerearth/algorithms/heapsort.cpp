#include <iostream>
#include <vector>

using namespace std;

void maxheapify(int A[],int i)
{
    int l = 2*i;
    int largest;
    int r = 2*i + 1;
    if (l < A.size() and A[l] > A[i])
        largest = l;
    else
        largest = i
    if(r < A.size() and A[r] > A[largest])
        largest = r
    if (largest != i)
    {
        exchange(A[i],A[largest]);
        maxheapify(A,largest);
    }
}

void BuildMaxHeap(A)
{
    for (i = A.size()/2 to 1)
        maxheapify(A,i);
}

int main()
{
    vector<int> v;
   int t;
   int val;
   while(t--)
   {
       cin>>val;
       v.push_back(val);
       BuildMaxHeap(v);
   }
   return 0;
}
