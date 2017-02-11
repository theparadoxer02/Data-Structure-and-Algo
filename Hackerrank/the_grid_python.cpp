#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdlib.h>


using namespace std;

int main(){
    int t,flag;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {   
        flag=0;
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int i = 0;i < R;i++)
           cin >> G[i];

        int r;
        int c;
        int count = 0;
        cin >> r >> c;
        vector<string> P(r);
        for(int i = 0;i < r;i++)
           cin >> P[i];

        int p=0;
        int pos=-1;
        int temp=0;

        for(int i=0;i<=R-r;i++)
        {
            if(G[i].find(P[0])!=-1)
                pos = G[i].find(P[0]);

            if(pos!=-1)
            {
                count = 0;
                for (int k=0;k<r;k++)
                {
                    int newpos = G[i+k].find(P[k]);
                    if(newpos=pos)
                        { count++;  }
                    else
                        { continue; }
                }
                if(count >= 3)
                    {flag=1;}
                cout<<count<<" ";
            }
        }

        if(flag==1)
            cout << "YES"<<endl;
       else
            cout << "NO"<<endl;
    }
    return 0;
}