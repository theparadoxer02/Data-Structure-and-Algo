#include <iostream>
#include <algorithm>
#include <string>

 using namespace std;

 int main()
 {
 	int n,m,t=0,ct,max,team=0;
 	string a[100],c[100];
 	cin>>n>>m;
 	for(int i=0;i<n;i++)
 		cin>>a[i];

 	for(int i=0;i<n-1;i++)
 	{
 		for(int j=i;j<n;j++)
 		{
 			ct=0;
 			for(int k=0;k<m;k++)
 			{
 				if((a[i][k]=='1')||(a[j][k]=='1'))
 					ct++;
 			}
 			if(ct>max)
 				{ max = ct; team=1; }
 			else if(ct==max)
 				team++;
 		}
 	}



	cout<<max<<endl<<team<<endl;

 	return 0;
 }