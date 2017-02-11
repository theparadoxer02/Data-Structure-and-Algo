#include <stdio.h>

int main()
{
	int t,count1,count2,i,j,k,val,max,index;
	long n;
	int c1[100000],c2[100000];
	int a[100000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}

		for(int i=0,k=0;i<n-1;i++)
		{
			count1=0;
			c1[n-1]=0;
			for(int j=i+1;j<n;j++)
			{
				if(a[j]>=a[i]) { count1++; break; }
				else { count1++; }
			}
			c1[k]=count1;k++;
		}

		for(i=1,k=1; i<n; i++,k++)
		{
			count2=0;
			c2[0]=0;
			for(j=i-1;j>=0;j--)
			{
				if(a[j]>=a[i]) { count2++; break; }
				else { count2++; }
			}
			c2[k]=count2;
		}
		max = 0,index;

		for(k=0;k<n;k++)
		{
			val = (c1[k]+c2[k])*(k+1);
			if(max<val)
				{
					max = val;
					index = k+1;
				}
		}

		printf("%d\n",index );
	}
	return 0;
}