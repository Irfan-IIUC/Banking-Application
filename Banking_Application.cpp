#include<bits/stdc++.h>
using namespace std;

class bankAccount
{
public:

    int balance=0, previousTransaction=0;
    char name[50], pass[25], pin[5], option[5];

    bankAccount()
    {
        printf("\nEnter your full name  : ");
        gets(name);

        printf("\nEnter your password   : ");
        gets(pass);

        printf("\nEnter your pin number : ");
        gets(pin);
    }

    void deposit(int amount)
    {
        if (amount != 0)
        {
            balance = balance + amount;
            previousTransaction = amount;
        }
    }

    void withdraw(int amount)
    {
        if (amount != 0)
        {
            balance = balance - amount;
            previousTransaction = -amount;
        }
    }

    void getPreviousTransaction()
    {
        if (previousTransaction > 0)
        {
            printf("\nDeposited : %d", previousTransaction);
        }
        else if (previousTransaction < 0)
        {
            printf("\nWithdrawn : %d", abs(previousTransaction));
        }
        else
        {
            printf("\nNo transaction occurred");
        }
    }

    void showMenu()
    {
        printf("\n+++++++++++++++++++++++++++++++++++++++++");
        printf("\nWelcome to Islami Bank Bangladesh Limited");
        printf("\n+++++++++++++++++++++++++++++++++++++++++");

        printf("\n\n1 => Check balance");
        printf("\n2 => Deposit");
        printf("\n3 => Withdraw");
        printf("\n4 => Previous transaction");
        printf("\n5 => Exit");

        do
        {
            printf("\n\n**************************");

            printf("\nPlease Enter an option : ");
            scanf("%s", option);

            printf("**************************");
            printf("\n");

            if(option[0] == '1')
            {
                printf("\n==========================");
                printf("\nBalance = %d", balance);
                printf("\n==========================");
                printf("\n");
            }

            else if(option[0] == '2')
            {
                printf("\n================================");
                printf("\nEnter an amount to deposit : ");

                int amount1;
                scanf("%d", &amount1);

                printf("================================");

                deposit(amount1);
                printf("\n");
            }

            else if(option[0] == '3')
            {
                printf("\n=================================");
                printf("\nEnter an amount to withdraw : ");

                int amount2;
                scanf("%d", &amount2);

                printf("=================================");

                withdraw(amount2);
                printf("\n");
            }

            else if(option[0] == '4')
            {
                printf("\n==========================");
                getPreviousTransaction();
                printf("\n==========================");
                printf("\n");
            }

            else if(option[0] == '5')
            {
                printf("\n*******************************");
                printf("\nThank you for using our service");
                printf("\n*******************************");
            }

            else
            {
                printf("\nInvalid option ! Please Enter again");
            }

        }

        while (option[0] != '5');
    }
};


int main()
{
    bankAccount ob1;
    ob1.showMenu();

    return 0;
}
