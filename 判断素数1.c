
/*#include<stdio.h>
int main()
{
    int i, n;
    printf("please input a number:"); 
    scanf("%d", &n);
    for (i = 2; i < n ; i++)
    {
        if (n%i == 0)  //0-n-1���пɱ��������� 
            break;   //���� 
    }
    if (n <=1 ) printf("This is not a prime\n");
    else  if (i < n) printf("This is not a prime.\n"); 
    else printf("This is a prime.\n");
    return 0;
 
}*/




/*#include<stdio.h>
#include<math.h>
int main()
{
	
	int i ,n;
	double k;
	printf("������һ��ֵ�������ж��ǲ���������");
	scanf("%d",n);
	k=sqrt(n);
	for (i = 2; i <= k;i++)
    {
        if (n%i == 0) break;
    }
    if (n <=1 ) printf("This is not a prime\n");
    else if (i <= k) printf("This is not a prime.\n");
    else printf("This is a prime\n");
    return 0;


} */





/*#include<stdio.h>
void main()
{
    int i,j;
    printf("������һ����������\n");
    scanf("%d",&i);
    if(i<2)
        printf("С��2�����������롣\n");
    if(i%2==0)
        printf("%d����һ��������\n",i);
    else
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                printf("%d����һ��������\n",i);
                continue;
            }
            else
            {
                printf("%d��һ��������\n",i);
                break;
            }   
        }
    }    
} */

































/*#include<stdio.h>
 int main ()
 {
 	int i,j,k;
 	scanf("%d",k);
	 for(i=2;i<=k-1;i++)
	 {
	 	if(k%i==0)
	 	break;
	 } 
	 if(i<k)
	 printf("�ⲻ��һ������"); 
	 else printf("����һ������"); 
	 
	 return 0;
 }*/
 
 
 
 
 
 
 
 
#include<stdio.h>

int main()

{

int i, n;

scanf("%d", &n);

for (i = 2; i < n ; i++)

{
if (n%i == 0)

break;

}

if (i < n) printf("This is not a prime.");

else printf("This is a prime.");

return 0;
}


