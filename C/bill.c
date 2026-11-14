#include <stdio.h>
#include <stdlib.h>

float u, c, t, total;
int price;


float calculatecost(float x, int y);
float calculatetax(float z);
float totalcost(float m, float n);

int main(void)
{
    price=25;

    printf("Enter electricity units consumed:");
    scanf("%f", &u);

    c=calculatecost(u,price);
    printf("Electricity Cost: Ksh %.2f\n", c);

    t=calculatetax(c);
    printf("Tax: Ksh %.2f\n", t);

    total=totalcost(c, t);
    printf("Total Cost:Ksh %.2f\n", total);

    if(c >=2000)
        printf("HIGH ELECTIRICY CONSUPTION!");
    else
        printf("Normal Consuption");


    return 0;
}

float calculatecost(float x, int y)
{
    return(x*y);
}

float calculatetax(float z)
{
    return(0.16*z);
}

float totalcost(float m, float n)
{
    return(m+n);
}
