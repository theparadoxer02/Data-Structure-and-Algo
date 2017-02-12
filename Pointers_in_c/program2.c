//PAGE 21
#include <stdio.h>
int main()
{
	float a = 7.99999;
	float *b,*c;
	b = &a;
	c = b;
	printf("%u %u %u \n",&a,b,c);
	printf("%d %d %d %d\n",a,*(&a),*b,*c);
}