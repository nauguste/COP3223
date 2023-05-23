#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 3
int main()
{

/*

int counter;

for(counter = 0; counter <= 10; counter++)
    printf("Counter = %d\n",counter);

*/

/*

int num, guess, nguess = 0, flag = 0;

srand(time(0));

num = rand() % 10 + 1;

for(nguess = 0; nguess < MAX; nguess++)
{
    printf("Guess %d: Guess the secret number!\n", nguess);
    scanf("%d", &guess);

if(guess == num)
    {
    printf("You got it!\n");
    flag = 1;
    break;
    }
}
if(!flag){

    printf("You ran out of guesses.\n");
    printf("The number was %d.\n", num);

}
*/



int counter, amount;

printf("How many Ampersands do you want?\n");
scanf("%d", &amount);

for(counter = 1; counter <= amount; counter++)
    printf("& #%d\n", counter);



return 0;
}
