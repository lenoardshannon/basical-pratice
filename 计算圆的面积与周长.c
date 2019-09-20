#include <stdio.h> 

#define PI 3.14159
double CircleArea(double r);
double CircleCircum(double r);
void main()
{
	 double Radius;
	 double Area;
	 double Circum;
	 scanf("%if",&Radius);
	 Area=CircleArea(Radius);
	 Circum=CircleCircum(Radius);
	 printf("Area=%f Circum=%f\n",Area,Circum);
	} 
