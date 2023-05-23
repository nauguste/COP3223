// Preparations for Mars!
// Naseem Auguste
// Sarah Angell
// COP3223
// September 22, 2019

// Pre-Processor Directive
#include <stdio.h>

int main()
{

int space, size, amount, excess;

// Introduction
printf("Welcome Traveler! \nBefore we make our trip we must make sure our payload has enough space for our resources.\n\n");

// Ask user for space input
printf("How big is your shuttle?\n");
scanf("%d", &space);

// Ask user for size input
printf("What is the average size of your equipment?\n");
scanf("%d", &size);

// Ask user for amount input
printf("How many resources are you going to take?\n");
scanf("%d", &amount);

// Calculates how much space is used and leftover
excess = space - (size * amount);

// If excess becomes a negative variable then execute end prompt
if (excess < 0)
    printf("We do not have enough space for all of this stuff!\n");
// If excess is positive then display excess amount and execute alt end prompt
else
{
printf("There is enough space for all our supplies!\n");
printf("We have an excess of %d cubic feet.\n", excess);
}

return 0;
}
