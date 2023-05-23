#include <stdio.h>
#define FC 50

void menu();
void balance(int AccBal);
void deposit(int * AccBal);
void withdraw(int * AccBal);
void fastcash(int * AccBal);

int main()
{
    int response, account;

    printf("What is your starting balance?\n");
    scanf("%d", &account);

    menu();
    scanf("%d", &response);
    printf("\n");



    while(response != 5 )
    {
    switch(response)
    {
    case 1:
        withdraw(&account);
        break;
    case 2:
        deposit(&account);
        break;
    case 3:
        fastcash(&account);
        break;
    case 4:
        balance(account);
        break;
    default:
        printf("Sorry, that was no a valid option.\n");
        break;
    }

    menu();
    scanf("%d", &response);
    printf("\n");
    }

    printf("Thank you for using our ATM!");

    return 0;
}

void menu()
{
    printf("1 - Withdraw.\n");
    printf("2 - Deposit.\n");
    printf("3 - Fast Cash.\n");
    printf("4 - View Balance.\n");
    printf("5 - Quit.\n");
    return;
}

void balance(int AccBal)
{
    printf("Your current balance is %d.\n", AccBal);
    return;
}

void withdraw(int * AccBal)
{
    int amount;

    printf("How much do you want to withdraw?\n");
    scanf("%d", &amount);

    if (amount > *AccBal)
        printf("Sorry, you do not possess the necessary funds.\n");
    else
        *AccBal = *AccBal - amount;

        printf("\n");

        return;
}

void deposit(int * AccBal)
{
    int amount;
    printf("How much do you want to deposit?\n");
    scanf("%d", &amount);

    *AccBal += amount;
    printf("\n");

    return;
}

void fastcash(int * Accbal)
{
    if (*Accbal < FC)
        printf("Sorry, you do not possess the necessary funds.\n");
    else
        *Accbal -= FC;
    printf("\n");
    return;
}
