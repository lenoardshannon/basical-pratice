#include<stdio.h>
int main ()
{
	
	int i,j,k;
	printf("please input vaule of k");
	scanf("%d",&k);
	for(i=0;i<=k;i++)
	{
	      for(j=0;j<k-i-1;j++)   //各首行空出的空格 个数// 
		printf(" ");
		for(j=0;j<=i;j++)   //各个行的*的输出个数// 
		printf("*");
		printf("\n");
						   
	
			
		
		
	}
	return 0;
} 


/*#include<stdio.h>

int main()
{
    int i,j,k;
    printf("please input vaule of k");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        for(j=0;j<k-i-1;j++)
    printf(" ");
    for(j=0;j<=i;j++)
    printf("*");
    printf("\n");
    }
    return 0;
}
*/














