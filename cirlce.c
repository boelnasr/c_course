#include<stdio.h>
#define PI 3.14159
int main(void)
{
double Area = 0.0, radius=0.0;
printf("enter the radius:");
scanf("%lf",&radius);
Area=PI*radius*radius;
printf("Area=%lf",Area);
printf("\n");
return 0;
}

