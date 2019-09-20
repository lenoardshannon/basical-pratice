#include <stdio.h>
int main()
{
    double f,c;
    printf("请输入您要换算的华氏温度") ; 
    scanf("%lf",&f);//输入华氏温度
    c=(f-32)/1.8;//得到摄氏度
    printf("摄氏温度=%lf, 绝对温度=%lf\n", c, c+273.15);
     
    return 0;
}
