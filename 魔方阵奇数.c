#include <stdio.h>
#define N 5 
//修改N的数据更改阶数
void MagicSquare(int(*)[N]);
void display(int(*p)[N]);
int main()
{
    int a[N][N];
    MagicSquare(a);
    display(a);
    return 0;
}
void MagicSquare(int(*a)[N])
{
    int col,row,i;
    col=(N-1)/2;
    row=0;
    a[row][col]=1;
    for(i=2;i<=N*N;i++)
    {
        if((i-1)%N==0)
            row++;
        else
        {
            row--;
            row=(row+N)%N;
            col++;
            col%=N;
        }
        a[row][col]=i;
    }
}
void display(int(*a)[N])
{
    int col,row;
    for(row=0;row<N;row++)
    {
        for(col=0;col<N;col++)
        {
            printf("%6d",a[row][col]);
        }
        printf("\n");
    }
}
