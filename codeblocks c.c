#include<stdio.h>
#include<math.h>
double main()

{
    double a,b,c,s,av,qs,qss;
    printf("������a,b,c��ֵ������һ������");
    scanf("%s,%av,%qs,%qss",&s,&av,&qs,&qss);
    s=a+b+c;
    av=s/3;
    qs=a*a+b*b+c*c;
    qss=sqrt(qs);

    printf("��=%s,ƽ��ֵ=%av,ƽ����=%qs,ƽ���͵Ŀ���=%qss\n");

    return  0;
}
