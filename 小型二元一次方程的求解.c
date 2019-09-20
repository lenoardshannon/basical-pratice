#include<stdio.h>
#include<math.h>

int main ()

{
	
	int x ,y ;
	for (x=0;x<=35;x++)
	{
		for (y=0;y<=35;y++)
		{
			if((x+y==35)&&(2*x+4*y==94))
			printf("x=%d y=%d",x ,y);
		}
	}
	return 0;
}

