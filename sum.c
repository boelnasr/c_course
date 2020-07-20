#include<stdio.h>
#include<math.h>
//////////////////////////////////////////
int sum (int n)
{    int sum=0;
    for(;n>0;n--)
    {sum=sum+n;}
    return (sum);
    }
/////////////////////////////////////////
int main (void)
{
    int x,y;
    printf("enter the number:");
    scanf("%d",&x);
    printf("\n");
    y=sum(x);
    printf("the sum is:%d",y);
    printf("\n");   
    return 0;
}