//PAGE NO - 68

#include <stdio.h>

void show(int*,int,int);
void display(int (*q)[4],int,int);

int main()
{
	int a[3][4] =  {
						1,2,3,4,
						5,6,7,8,
						9,0,1,6
					};
	show(a,3,4);
	printf("\n");
	display(a,3,4);
	printf("\n");
	return 0;
}

void show(int *q ,int row,int col)
{
	printf("This is show funtion\n");
	for(int i=0;i<row;i++)
	{
		printf("\n");
		for(int j=0;j<col;j++)
		{
			printf("%d ",*(q+i*col+j));
		}
	}
}

void display(int (*q)[4],int row , int col)
{
	int *p;
	printf("\nThis is display funtion \n");
	for(int i =0;i<row;i++)
	{
		printf("\n");
		p = q+i;
		for(int j=0;j<col;j++)
			printf("%d ",*(p+j) );

	}
}