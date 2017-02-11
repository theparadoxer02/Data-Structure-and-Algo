#include <iostream>
#include <math.h>
using namespace std;

int main() {

	int t,n;
	long long sum;
	cin>>t;
	while(t--) {
		sum =0;
		cin>>n;
		if (n==1) { cout<<0<<endl; }
		else {
			for(int i=2;i<=(int)sqrt(n);i++) {
				if(n%i==0) {
					if(i==n/i)  
						{ sum = sum + i; }
					else
						{ sum = sum + i + n/i; }
				}
			}
		}
	cout<<sum+1<<endl;
	}
	return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num;
        long long ans=0;
        scanf("%d",&num);
        if(num==1)
            printf("0\n");
        else
        {
            int i,t=sqrt(num);
            for(i=2;i<=t;i++)
            {
                if(num%i==0)
                {
                    if(i==num/i)
                        ans+=i;
                    else
                        ans+=i+num/i;
                }
            }
            ans++;
            printf("%lld\n",ans);
        }
    }
    return 0;
}