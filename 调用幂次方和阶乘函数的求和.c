//   s=1+x+(x^2/2!）+.....+(x^n/n!） n=3>>1+3+4.5=8.5
//#include<stdio.h>
//#include<stdlib.h> 


 /*long func (int i ,int n)   //幂次的函数 
{   n=2;
	for (i=1;i<=n;i++)
	{   long l;//  根据现实问题判断 数据类型 此处用long 
		l*=i; 
		return l;}
}    
long fact (long n)        //阶乘的函数 
{    long i,sigma;  
	for(i=1;i<=n;i++)
	{
		sigma*=i;
		return sigma;
}}
	




int main()
{
	double T;//T 为问题的求和 
	T= 1.0;
	int i,n=1;
	for(i=1;i<=n;i++)
	  T=T+1.0*func(3,i)/fact(i) ;
	  printf("%f",T);
	  return 0;
	
	
}*/
















#include<stdio.h>
long func(int,int);
long fact(int);
int main ()
{
	int i,n=2;
	double s=1.0;
	for(i=1;i<=n;i++)
	{	s=s+1.0*func(3,i)/fact(i);
	}
	printf("%f",s);
	return 0;
}

long func(int x,int n)                     //幂次的函数     s=1+x+(x^2/2!）+.....+(x^n/n!）        
{
	int i;
	long m=1;
	for(i=1;i<=n;i++) m*=x;
	return m;
	
}
long fact(int n)                   //阶乘的函数 
{
	int i;
	long m=1;
	for(i=1;i<=n;i++) m*=i;
	return m;
}
