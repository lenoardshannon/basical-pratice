#include<stdio.h>
#define PI 3.14159
 
int main ()
{
	
	int i, j ;
	printf("i  j \n");
	
	for (i=0;i<2;i++)
	    for (j=0;j<3;j++){
	    	
	    	if(j==2)  break;
	    	printf(" %d   %d\n ", i,j  );
	    	
	    	
	    }
	    return 0;
}
