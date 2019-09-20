#include<stdio.h>

#include<math.h>
double main()

{
    double a,b,c,s,av,qs,qss;
    printf("请输入a,b,c的值进行下一步计算");
    scanf("%lf,%lf,%lf,%lf",&s,&av,&qs,&qss);
    s=a+b+c;
    av=(a+b+c)/3;
    qs=a*a+b*b+c*c;
    qss=sqrt(a*a+b*b+c*c);

    printf("和=%s,平均值=%av,平方和=%qs,平方和的开方=%qss\n");

    return  0;
}






