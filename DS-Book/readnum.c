#include <stdio.h>
int prompt(void);
int sqrnum(int num);
int readnum(void);

int main() {
	int t ;
	for(prompt();t=readnum();prompt())
		sqrnum(t);
	return 0;
}

int prompt(void) {
	printf("Enter a number\n");
}

int readnum(void) {
	int t;
	scanf("%d",&t);
	return t;
}

int sqrnum(int num) {
	printf("%d\n",num*num);
	return num*num;
}
