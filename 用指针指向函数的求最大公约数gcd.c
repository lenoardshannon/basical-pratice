#include<stdio.h>
int fu (int, int);
int  main ()
{
	int a=45,b=15,c;
	int (*L)(int ,int);
	L=fu;
	c=fu(a,b);
	printf("%c",c);             //���ں������ printf 
}
int fu (int x,int y)
{   int r;
	r=x%y;
	while(r)
	{ x=y;
	y=r;
	r=x%y;
	}
	return y;
}
