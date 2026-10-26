#include<stdio.h>

int f,c,upper,lower,interval;
int main(void)
{
 interval=10;
 upper=1000;
 lower=0;
 f=lower;
 printf("--------------------------------\n");
 printf("|Fahrenheit|Celsius|\n");
 printf("--------------------------------\n");
 while(f<=upper)
 {
  c=5*(f-32)/9;
  printf("|%10d | %7d|\n",f,c);
  f=f+interval;
 }
 return 0;
}