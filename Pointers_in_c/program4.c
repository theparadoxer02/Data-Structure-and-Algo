//Page No 24:-

#include <stdio.h>
float *fun( float* );

int main()
{
	float p=89.90;
	float *q;
	q = &p;
	printf("q before call %u \n", q);
	q = fun(&p);
	printf("q after call %u: \n", q);
	return 0;
}

float *fun(float *r)
{
	r = r + 1;
	return r;
}