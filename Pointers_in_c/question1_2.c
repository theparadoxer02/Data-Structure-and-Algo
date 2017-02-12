//Page no 35, Exercise question

#include <stdio.h>
int main()
{
	char c,*cc;
	int i;
	long l;
	float f;
	c = 'Z';
	i = 15;
	l = 7777;
	f = 1.14;
	cc = &c;
	printf("c = %c cc = %u\n",*cc,cc);
	cc = &i;	
	printf("i = %d cc = %u\n",*cc,cc);
	cc = &l;
	printf("l = %ld cc = %u\n",*cc,cc);
	cc = &	f;
	printf("f = %f cc = %u\n",*cc,cc);
	return 0;
}