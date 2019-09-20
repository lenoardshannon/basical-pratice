//   递归方式
//递归必须给 递归模式 和 递归的边界条件。。




#include<stdio.h>
long fibo (long n);
void main()
{  printf("%ld\n",fibo(16));

};
long fibo (long n){
	if(n==1||n==2)return 1;
	else return fibo(n-1)+(n-2);
} 
