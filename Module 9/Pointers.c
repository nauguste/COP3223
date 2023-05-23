#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll();
void swap(int * x, int * y);

int main()
{

    int AR1, AR2, DR1, DR2, temp, sum;
    srand(time(0));

    AR1 = roll();
    AR2 = roll();
    DR1 = roll();
    DR2 = roll();

    printf("The attacker rolled %d and %d.\n", AR1, AR2);
    printf("The defender rolled %d and %d.\n", DR1, DR2);

    if (AR1 < AR2)
        swap(&AR1, &AR2);
    if (DR1 < DR2)
        swap(&DR1, &DR2);

    sum = attack(AR1, AR2, DR1, DR2);
    printf("The attacker defeated %d armies.\n", sum);

    return 0;
}

//conditions: returns a value between 1 and 6
int roll()
{   return rand() % 6 + 1;  }

void swap(int * x, int * y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int attack(int A1, int A2, int D1, int D2)
{
    int total = 0;

    if (A1 > D1)
        total++;

    if (A2 > D2)
        total++;

    return total;
}
