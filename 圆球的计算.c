#include<stdio.h>

int main()

{

float h,r,c,s,sq,vq,vz;

float pi = 3.141526;

printf("������Բ�뾶r��Բ����h:");

scanf("%f,%f",&r,&h);

c = 2 * pi*r;

s = pi*r*r;

sq = 4 * pi*r*r;

vq = (4 / 3)*pi*r*r*r;

vz = pi*r*r*h;

printf("Բ�ܳ�Ϊ��c=%6.2f\n",c);

printf("Բ���Ϊ��s=%6.2f\n",s);

printf("Բ������Ϊ��sq=%6.2f\n", sq);

printf("Բ�����Ϊ��vq=%6.2f\n", vq);

printf("Բ�����Ϊ��vz=%6.2f\n", vz);

return 0;

}

