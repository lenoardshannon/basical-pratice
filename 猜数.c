#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()

{
srand(time (0));
int number = rand()%100+1;
int count=0;
int a=0;
printf("�������������һ����0��100֮��");
 
do {
	printf("��²�0-100֮�����");
    scanf("%d",&a);
	count++;
	if( a > number) {
		printf("��µ�������"); 
		}else if (" a < number"){
			printf("��µ���С��");
		}
		
	
	
} while(a != number);
printf("̫���������ڲ¶��ˣ�������%d�β����˽��\n",count); 

return 0; 
	 
} 
