//   a ,b ,c  �������С��
//    �����ֹ�ȥ�г�������� 

#include<stdio.h>

int main ()
{
	int a, b, c;
	printf("������a b c ����ֵ�����Ƚ�\n");
	
	sacnf("%d %d %d",&a ,&b, &c);
	if(a>=b)
		if(c>=a) printf("The rigtht order is %d %d %d\n",c a b);
		else(c>=b) printf("The rigtht order is %d %d %d\n",a c b );
		     else printf ("The rigtht order is %d %d %d\n",a b c);
	else if (c<a) printf("The rigtht order is %d %d %d\n", b a c);
	     else if (c>=b) printf("The rigtht order is %d %d %d\n", c b a);
		       else printf("The rigtht order is %d %d %d\n",b c a);
			   
			   
			   	     
		 
		
	
	   return 0;
} 
