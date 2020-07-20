#include<stdio.h>
#include<math.h>
//////////////////////////////////////////
int avreage (int n, int m ,int **a)//calculate the average of an array
{    int sum=0;
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < m; j++)//ccomputing the sum of all elements in the matrix
        {
               sum+=a[i][j];}
                int avg=sum/n;}
                
        
    int total=n*m;
    double avg =sum/total;
    return (avg);
    }
/////////////////////////////////////////
int main (void)
{
    int r=40;
    int col=25;
    FILE * fp;
    fp = fopen("data.txt","r");// open the text file

    int data[r][col];
    int i,j;
    /* construct the 2d matrix from the text file*/
    for(i=0; i<40; i++) {
        for(j=0; j<25; j++) {
            fscanf(fp,"%lc",&data[i][j]);
        }
    }

    for(i=0; i<40; i++) {
        for(j=0; j<25; j++) {
            printf("%lc",data[i][j]);
        }
    }
    printf("\n\n");

    double y=avreage(r,col,data[r][col]);// call the average function
    printf("%lf",y);
    return 0;
}