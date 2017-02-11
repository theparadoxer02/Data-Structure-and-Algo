#include <stdio.h>

using namespace std;

int main()
{
	int t,n,range;
	int arr[100001];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i =0;i<n;i++){ scanf("%d",&arr[i]); }
		printf(" ");
		for(int i =1;i<n;i++)
		{
			range = 0;
			for(int j=i-1;j>=0;j--)
			{
				if(arr[j]>arr[i])
					{ 	
						range++;
						break; }
				else
					range++;
			}
			printf("%d ",range);
		}
		printf("\n");;
	}
	return 0;
}