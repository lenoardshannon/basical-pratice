#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()

{
srand(time (0));
int number = rand()%100+1;
int count=0;
int a=0;
printf("请输入你所想的一个数0到100之间");
 
do {
	printf("请猜猜0-100之间的数");
    scanf("%d",&a);
	count++;
	if( a > number) {
		printf("你猜得数大了"); 
		}else if (" a < number"){
			printf("你猜得数小了");
		}
		
	
	
} while(a != number);
printf("太好了你终于猜对了，你用了%d次猜中了结果\n",count); 

return 0; 
	 
} 
