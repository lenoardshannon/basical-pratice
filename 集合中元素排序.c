// viod SelectSort(int *Set,int SetSize)  ���������� 
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
void SelectSort (int *Set,int size) //i��j���������飬k��¼ÿ�ײ��ҹ������ҵ�����СԪ�� ���±ꡣ 
{								//��		i=0ʱ��j=1���õ�0��ȥ������ ֵ���жԱȣ� 
									//  	i=1ʱ��j=2���������ݽ��жԱȣ�Ȼ����swap ������ 
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

