#include<stdio.h>
#include<math.h>
// function to swap elements
int swap (int *a ,int *b)
{
    int temp;
    temp= *a;
    *a=*b;
    *b=temp;
}
//function to print the array
int print_array(int array[], int n)
{
    printf("the array is {");
    int i;
    for (i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
        
    }
    printf("}");
    printf("\n");
}

int buble(int array[], int n)
{
    int i, j ;
    for(i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (array[j]>array[j+1])
            {
                swap(&array[j],&array[j+1]);
            }
        }
        
    }

}
int main (void)
{
    int arr[]={3, 13,36 ,45 ,9 ,86};
    int n ;
    n=sizeof(arr)/sizeof(int);
    printf("before sorting ");
    print_array(arr,n);
    printf(" \n \n");
    printf("after sorting ");
    buble(arr,n);
    print_array(arr,n);
    printf("\n \n");
    
}
