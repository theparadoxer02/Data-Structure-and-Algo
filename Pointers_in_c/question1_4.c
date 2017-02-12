// Page no 37

#include <stdio.h>
void swap(int * ,int *);
void exchange(int **,int *);

int main()
{
	int c = 10, d =20;
	printf("Before swap c = %d d = %d\n",c,d);
	swap(&c,&d);
	printf("After swap c = %d d = %d\n",c,d);
	return 0;
}

void swap(int *c , int *d)
{
	exchange(&c,d);
}

void exchange(int **a,int *b)
{
	int t ;
	t = **a;
	**a = *b;
	*b = t;
}