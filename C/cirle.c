#include <stdio.h>
#include <stdlib.h>

float a, p, c;
int r, s, d;

float area(float x, int y);
float circumfrence(float x, int y);

int main(void)
{
    p=3.142;
    printf("Enter the radius of the circle:");
    scanf("%d", &r);
    s=r*r;
    d=2*r;

    a=area(p,s);
    printf("%f times %d =%.3f\n", p,s,a);

    c=circumfrence(p,d);
    printf("%f times %d=%.3f\n", p, d, c);

    return 0;
}

float area(float x, int y)
{
    return(x*y);
}

float circumfrence(float x, int y)
{
    return(x*y);
}
 