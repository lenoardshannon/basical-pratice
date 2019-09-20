#include<stdio.h> 

void swap(int*,int*);
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b)swap(&a,&b);
	printf("%d %d\n",a,b);
}

void swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
