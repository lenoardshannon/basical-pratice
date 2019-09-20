#include<stdio.h>
void find (float *p,int max,int min,int n)
{
	int k;           //计数 
	int array[k];     //定义数组 
	*max=*p;           
	
	for(k=0;k<n;K++)
	{
		t=*(p+k);
		if(*max<t)
		*max=t;
		if(t<*min)
		*min=t;
	}
}
