#include<stdio.h>  /* for the inputs and the outputs*/
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void) // stars the main function
{ 
double interval, x, y; // declaring my variable 
int i;
printf("the angle|\tsine|\t\tcosine\n");
for(i = 0; i <=30; i++)// starts a for loop to itrate the process
{
 interval = i/30.0; //the interval is constructed and i is dvided by the # of itterations
 x=fabs(sin(interval));//calcualting the sine values
 y=fabs(cos(interval));//calcualting the cosine values
 printf("%lf \t%lf\t%lf \n", interval, x, y);//printing the result out
};



return 0;
}