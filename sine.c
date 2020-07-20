/*#include<stdio.h>
#include<math.h>
#define PI 3.14159265
int main(void)
{
    double angle, s;
    printf("Enter the angle");
    scanf("%lf",&angle);
    s=sinh(angle*PI/180);
    printf("sine of the angle=%lf",s);
    return 0;
}*/
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main () {
   double x, ret, val;

   x = 45.0;
   val = PI / 180;
   ret = sin(x*val);
   printf("The sine of %lf is %lf degrees", x, ret);
   
   return(0);
}