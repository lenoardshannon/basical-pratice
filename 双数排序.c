#include<stdio.h>

int main()

{
	double a,b;
	double temp;
	printf("Please input stastics a and b:");
	scanf("%lf%lf",&a,&b);
	if( a > b){
	    temp=a;
		a=b;
		b=temp;
			}
	
	printf("排序好的数字为:%.2f,%.2f\n",a,b);
	
	return 0;
} 
