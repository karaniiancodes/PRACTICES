#include <stdio.h>
#include <stdlib.h>

char name[20];
int bs, ch;
float op, g, t, n, h;

float overtime(float x);
float gross(int x,float y);
float tax(float x);
float net(float x, float y);

int main()
{
do
{
    printf("Choose the service you want to use.\n 1.Payroll\n 2.Exit\n");
    scanf("%d",&ch);

    if(ch==1)
    {
    printf("Kindy enter your details.\n");
    printf("Name:");
    scanf("%s", &name);

    do
    {
      printf("Basic Salary:");
      scanf("%d", &bs);
      if(bs<0)
      {
        printf("Enter a valid basic salary.\n");
      }
    }
    while(bs<0);

    do
    {
      printf("Amount of Overtime Hours:");
      scanf("%f", &h);
      if(h<=0)
      {
        printf("Enter a valid number of hours.\n");
      }
    }
    while(h<0);

    op=overtime(h);
    g=gross(bs, op);
    t=tax(g);
    n=net(g, t);

    printf("Hello %s.\nHere is your payroll for this month.\n", name);
    printf("Overtime Payment: Ksh %.2f\n", op);
    printf("Gross Salary: Ksh %.2f\n", g);
    printf("Tax: Ksh %.2f\n", t);
    printf("Net Salary: Ksh %.2f\n\n", n);
    }
    else if(ch==2)
    {
       printf("Thank you for using our payroll");
    }
    else
    {
     printf("Inavalid Choice. Try again.\n");
    }
}
while(ch !=2);

    return 0;
}

float overtime(float x)
{
       return(200*x);
}

float gross(int x, float y)
{
    return(x+y);
}

float tax(float x)
{
    return(0.1*x);
}

float net(float x, float y)
{
    return(x-y);
}
