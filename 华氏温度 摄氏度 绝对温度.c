#include <stdio.h>
int main()
{
    double f,c;
    printf("��������Ҫ����Ļ����¶�") ; 
    scanf("%lf",&f);//���뻪���¶�
    c=(f-32)/1.8;//�õ����϶�
    printf("�����¶�=%lf, �����¶�=%lf\n", c, c+273.15);
     
    return 0;
}
