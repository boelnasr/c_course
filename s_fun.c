#include<stdio.h>//including the needed librraries
#include<math.h>
#define PI 3.14159265
int main(void)
{
    double x, s;
    printf("Enter the angle= "); //demands the angle value from the user
    scanf("%lf",&x);
    printf("\n");
    s=sinh(x*PI/180.0);//computes the value of the sine
    printf("sine of the angle=%lf \n",s);
    return 0;
}
