#include <stdio.h>
#include <stdlib.h>

int m, e, k, p, b,c,tot;
float  average, perc;
char g;

int total(int u, int v, int w, int x, int y, int z);
float avr(float x);
float percent(int x);
char grade(int m);

int main()
{
    printf("Enter Your Marks\n");
    printf("Mathematics:");
    scanf("%d", &m);

    printf("English:");
    scanf("%d", &e);

    printf("Kiswahili:");
    scanf("%d", &k);

    printf("Physics:");
    scanf("%d", &p);

    printf("Biology:");
    scanf("%d", &b);

    printf("Chemistry:");
    scanf("%d", &c);

    tot=total(m, e,k,p,b,c);
   
    average=avr(tot);

    perc=percent(tot);

    g=grade( m);
    printf("Subject     Percentage      Grade\n");
    printf("Mathematics       %d%%         %c\n",m, g);
    g=grade( e);
    printf("English           %d%%         %c\n",e, g);
    g=grade( k);
    printf("Kiswahili         %d%%         %c\n",k, g);
    g=grade( p);
    printf("Physics           %d%%         %c\n",p, g);
    g=grade( b);
    printf("Biology           %d%%         %c\n", b, g);
    g=grade( c);
    printf("Physics           %d%%         %c\n", p, g);
    

    printf("Total: %d/600\n", tot);
    printf("Average: %.2f\n", average);
    printf("Percentage: %.2f%%\n", perc);

    g=grade(average);
    printf("Overall Grade: %c", g);

    return 0;

}

int total(int u, int v, int w, int x, int y, int z)
{
    return(u+v+w+x+y+z);
}

float avr(float x)
{
    return(x/6);
}

float percent(int x)
{
    return((x*100)/(float)600);
}

char grade(int m)
{
  if (m>=80)
    return 'A';
  else if(m>=70)
    return 'B';
  else if(m>=60)
    return 'C';
  else if(m>=50)
    return'D';
  else
    return'E';
}

