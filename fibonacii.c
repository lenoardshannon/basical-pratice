//   �ݹ鷽ʽ
//�ݹ����� �ݹ�ģʽ �� �ݹ�ı߽���������




#include<stdio.h>
long fibo (long n);
void main()
{  printf("%ld\n",fibo(16));

};
long fibo (long n){
	if(n==1||n==2)return 1;
	else return fibo(n-1)+(n-2);
} 
