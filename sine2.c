#include<stdio.h>  /* for the inputs and the outputs*/
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void) // stars the main function
{ 
double interval, x, y; // declaring my variable 
int i;
printf("the angle|  sine|  cosine");
for(i = 0; i <30; i++)// starts a for loop to itrate the process
{
 interval = i/10.0;
 x=fabs(sin(interval));//calcualting the sine values
 y=fabs(cos(interval));//calcualting the cosine values
 printf("%lf \t%lf\t%lf ", interval, x, y);//printing the result out
};



return 0;
}