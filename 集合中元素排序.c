// viod SelectSort(int *Set,int SetSize)  数组排序函数 
#include<stdio.h>
#define N 5
void SelectSort(int *Set,int SetSize);
void Swap (int *p,int *q);
void main()
{
	int S[N]={20,30,29,66,77};
	int i;
	SelectSort(S,N);
	for(i=0;i<N;i++)
	{
		printf("%d\n",S[i]);
	}
	printf("\n");
}
void SelectSort (int *Set,int size) //i和j来遍历数组，k记录每伦查找过程中找到的最小元素 的下标。 
{								//当		i=0时，j=1，用第0个去跟后续 值进行对比， 
									//  	i=1时，j=2，跟后方数据进行对比，然后用swap 交换。 
	int i=0,j=0,k=0;
	for(i=0;i<size-1;i++)
	{
		k=i;
		for(j=i+1;j<=size-1;j++)
		{
			if(Set[j]<Set[k])k=j;
					
		}
		if(k!=i)Swap(&Set[i],&Set[k]);
		
	}
}
void Swap (int *p,int *q){


	int t;
	t=*p;
	*p=*q;
	*q=t;
}

