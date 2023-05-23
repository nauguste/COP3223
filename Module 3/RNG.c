#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{



srand(time(0));
float A = rand() % 100;
float B = rand() / 25;
float C = rand ();

printf("Our random number is %.0f.\n", A);
printf("%.0f\n%.0f\n", B, C);



/*

==   Equal to
!=   Not Equal to
>    Greater than
<    Less than
>=   Greater than or equal to
<=   Less than or equal to


true = 1
false = 0

*/


/*

int Alpha, Beta;

srand(time(0));
Alpha = rand() % 10 + 1;

printf("Guess a number between 1 through 10.\n");
scanf("%d", &Beta);

if (Beta == Alpha)
    printf("You guessed the number correctly!\n");
else
    printf("You didn't guess the right number! The correct number was %d.\n", Alpha);

*/

/*

int Age, Time;

printf("How old are you?\n");
scanf("%d", &Age);

Time = 16 - Age;

if (Age >= 16)
    printf("You qualify to apply for a license! Proceed to the front desk.\n");
else
    printf("You are too young to earn a driver's license. Come back in %d years.\n", Time);


*/





return 0;
}
