#include<stdio.h>
int main()
{ 
  int a=0,b=0,c=0;
  int *pa=&a,*pb=&b,*pc=&c;
  printf("Please input two int numbers");
  scanf("%d%d",pa,pb);
  *pc=*pa+*pb;
  printf("a=%d  b=%d  c=%d\n",a,b,c);
  return 0; 

} 
