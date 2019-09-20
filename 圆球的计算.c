#include<stdio.h>

int main()

{

float h,r,c,s,sq,vq,vz;

float pi = 3.141526;

printf("请输入圆半径r，圆柱高h:");

scanf("%f,%f",&r,&h);

c = 2 * pi*r;

s = pi*r*r;

sq = 4 * pi*r*r;

vq = (4 / 3)*pi*r*r*r;

vz = pi*r*r*h;

printf("圆周长为：c=%6.2f\n",c);

printf("圆面积为：s=%6.2f\n",s);

printf("圆球表面积为：sq=%6.2f\n", sq);

printf("圆球体积为：vq=%6.2f\n", vq);

printf("圆柱体积为：vz=%6.2f\n", vz);

return 0;

}

