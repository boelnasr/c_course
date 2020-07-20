#include<stdio.h>
#define PI 3.14159
int main(void)
{
    double radius=0.0,volume=0.0;
    scanf("%lf", &radius);
    volume=PI*4.0 *radius*(radius*radius)/3.0 ;
    printf("volume is : %lf \n\n",volume );
    printf("reminder=%d",3%4);
    return 0;
}