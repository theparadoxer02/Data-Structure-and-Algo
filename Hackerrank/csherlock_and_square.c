#include <stdio.h>
#include <math.h>
int isPerfect(int);
int main()
{
	int t,a,b,count,i;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d%d",&a,&b);
		for(int i=a;i<=b;i++)
		{
			if(isPerfect(i)==0)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}

int isPerfect(int num)
{
	int m;
	float p;
	p = sqrt(num);
	m = p;
	if(p==m)
		return 0;
	else 
	return 1;
}