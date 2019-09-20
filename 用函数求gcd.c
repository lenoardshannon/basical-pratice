#include<stdio.h>
int gcd(int,int);
int main()
{    int a,b;
	printf("%d",gcd(a,b));
} 

int gcd(int a,int b)
{
	int x=100,y=15, r;
	r=x%y;
	while(r!=0)
	{x=y;
	y=r;
	r=x%y;}
	return y;
}








