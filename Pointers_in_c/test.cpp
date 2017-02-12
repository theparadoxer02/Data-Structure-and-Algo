#include <stdio.h>
int main()
{
	int i = 10;
	char *cc;
	cc = &i;			
	printf("%d\n",*cc);
	return 0;
}