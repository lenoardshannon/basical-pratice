#include<stdio.h>
 void sum(int begin, int end)
 {
 	int i;
 	int sum=0;
 	for( i = begin;i<=end;i++)
 	{
 		sum+=i;
 	}
 	printf("%d到%d的和是%d\n",begin,end,sum);
 	
 }
 
 
 int main ()
  {
  	
  	sum(1,10);
  	sum(20,40);
  	sum(50,100);
  	
  	return 0;
	   
  }
