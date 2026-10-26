#include<stdio.h>
int r;
float p,a;

int main(void)
{
    p=3.142;
    printf("Whats the radius:");
    scanf("%d", &r);
    a=p*r*r;
    printf("Area is %f times %d times %d = %f", p,r,r,a);
    return 0;
}