#include <stdio.h>
#include <stdlib.h>

int m, p,c;
float a;
char g;

float average(int x, int y, int z);
char grade(float m);

int main()
{
   printf("Enter score in Mathematics:");
   scanf("%d",&m);

   printf("Enter score in Physics:");
   scanf("%d", &p);

   printf("Enter score in Chemistry:");
   scanf("%d",&c);

   a=average(m ,p ,c);
   printf("Average: %.2f\n",a);

   g=grade(a);
   printf("Grade: %c", g);

}

float average(int x, int y, int z)
{
    return((x+y+z)/3.0);
}

char grade(float m)
{
  if (m>=80)
    return 'A';
  else if(m>=70&&m<=79)
    return'B';
  else if(m>=60&&m<=69)
    return'C';
  else if(m>=50&&m<=59)
    return'D';
  else
    return'E';

}
