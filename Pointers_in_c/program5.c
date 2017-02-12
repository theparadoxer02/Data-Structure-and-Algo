//Page No - 25

#include <stdio.h>
void fun(int **);
int main()
{
	int *j;
	fun(&j);
	printf("%d\n", *j);
	return 0;
}

void fun(int **k)
{
	int a = 10;
	*k = &a;
}