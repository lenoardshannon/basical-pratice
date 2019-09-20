// ¾Å¾Å³Ë·¨±í


#include<stdio.h> 
 int main ()
{
	
	int n=9;
	scanf("%d",&n);
	int i,j;
	i=1;
//	printf("please input i and j £º");
//	scanf("%d%d",&i ,&j);
	
	while(i<=n){
		j=1;
		{
		while (j<=i){
			printf("%d%d%d",i,j,i*j);
			if (i*j<10){
				printf("   ");
				}else { 
			  printf("  ");
	        }
			j++;
		}
		printf("\n");
		i++;
		
    }
	 
}return 0; 
}
