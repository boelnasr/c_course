#include<stdio.h>

int foobar(int* n){
     *n = *n +1;
     return *n;
}
int mystery(int p, int q){
     
    int r;
    if ((r = p % q) == 0)
        return q; 
    else return mystery(q, r);
}
int main(void)
{int a = 1, b = 2, c = 3;
    int k = 6;
printf("foobar(k) = %d,",foobar(&k) );
printf(" k = %d\n", k);
printf("\n");
printf("%d",  c = a++);
printf("\n");
printf("%d",   mystery(2, 6));
printf("\n");
}