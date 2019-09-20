#include<stdio.h>
int main()
{   int a[5],i,*p=a,sum=0;
	printf("please input 5 numbers:");
	for(i=0;i<5;i++)
	//if (isprime(*(p)+未完成))
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}	
	printf("\nThe sum=%d",sum);
	return 0;
	}
int isprime()
int x;
{
	int i;
	for(i=2;i<x/2;i++)
	{
		if(x%i==0)return 0;
		//未完成 
		
	}
}
