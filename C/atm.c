#include <stdio.h>
#include <stdlib.h>

int balance, choice, amount, newbal;

int withdraw(int x, int y);
int deposit(int x, int y);

int main()
{
    balance=10000;

    printf("Welcome to Velocity ATM\n");

do
{
    printf(" 1. Check Balance\n 2. Withdraw\n 3. Deposit\n 4. Exit\n");
    printf("Enter Your Choice:");
    scanf("%d", &choice);

    if(choice==1)
    {
        printf("Your Balance is: Ksh %d\n", balance);
    }
    else if(choice==2)
    {
        printf("Enter amount you want to withdraw:");
        scanf("%d", &amount);
        newbal=withdraw(balance, amount);
        if(newbal==-1)
        {
            printf("Insufficient Balance\n");
        }
        else if(newbal==-2)
        {
            printf("Enter a valid amount\n");
        }
        else
        {
         balance=newbal;
         printf("Withdrawal of Ksh %d was successful.\nNew balance: Ksh %d\n", amount, newbal );
        }

    }
    else if(choice==3)
    {
        printf("Enter amount you want to deposit:");
        scanf("%d", &amount);
        newbal=deposit(balance, amount);
        if(newbal==-1)
        {
            printf("Enter a valid amount\n");
        }
        else
        {
        balance=newbal;
        printf("Deposit of Ksh %d was successful.\nNew balance: Ksh %d\n", amount, newbal);
        }
    }
    else if(choice==4)
    {
        printf("Thank you for transacting with Velocity ATMs. Have a good day.\n");
    }
    else
    {
        printf("INVALID CHOICE\n");
    }
}
while(choice !=4);

    return 0;
}

int withdraw(int x, int y)
{
    if(y>x)
    {
      return-1;
    }
    else if(y<=0)
    {
        return-2;
    }
    else
    {
      return(x-y);
    }
}

int deposit(int x, int y)
{
    if(y<=0)
    {
       return-1;
    }
    else
    {
       return(x+y);
    }

}