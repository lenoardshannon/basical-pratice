//   s=1+x+(x^2/2!��+.....+(x^n/n!�� n=3>>1+3+4.5=8.5
//#include<stdio.h>
//#include<stdlib.h> 


 /*long func (int i ,int n)   //�ݴεĺ��� 
{   n=2;
	for (i=1;i<=n;i++)
	{   long l;//  ������ʵ�����ж� �������� �˴���long 
		l*=i; 
		return l;}
}    
long fact (long n)        //�׳˵ĺ��� 
{    long i,sigma;  
	for(i=1;i<=n;i++)
	{
		sigma*=i;
		return sigma;
}}
	




int main()
{
	double T;//T Ϊ�������� 
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

long func(int x,int n)                     //�ݴεĺ���     s=1+x+(x^2/2!��+.....+(x^n/n!��        
{
	int i;
	long m=1;
	for(i=1;i<=n;i++) m*=x;
	return m;
	
}
long fact(int n)                   //�׳˵ĺ��� 
{
	int i;
	long m=1;
	for(i=1;i<=n;i++) m*=i;
	return m;
}
