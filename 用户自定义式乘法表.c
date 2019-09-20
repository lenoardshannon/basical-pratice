#include<stdio.h>

int main ()

{
	
	int i,j,t;
	printf("please input t numben:");
	scanf("%d",&t);
	for(i=1;i<t;i++)
	{   for (j=1;j<=i;j++)
	printf("%d*%d=%-4d",j,i,i*j);
		printf("\n");
		
	}
	return 0;
} 
