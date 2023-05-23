// Landing on Mars!
// Naseem Auguste
// Sarah Angell
// COP3223 Online
// October 3, 2019

// Pre-Processor Directive
#include <stdio.h>

int main()
{

int i=1, j=1, succ=0, days, scrimms, adjs;

    // Introduction
    printf("Howdy there fellow astronaut!\nThis program is simply designed to calculate the\nnumber of successful landings you have performed in the simulations.\n\n");

    // Ask for how many times the first loop will prompt
    printf("How many days did you spend running scrimmages?\n");
    scanf("%d", &days);

    // Loop the program for every day that was inputted
    for(i=1; i <= days; i++)
        {
        // Ask for number of simulations
        printf("How many scrimmages did you run on Day #%d?\n", i);
        scanf("%d", &scrimms);

        // Put this in to make the command prompt look nicer
        printf("\n");

        // Loop the program for every simulation that was inputted
        for(j=1; j <= scrimms; j++)
            {
            // Scan in adjs variable and if it is less than 5 count it as a success
            printf("How many adjustments did you have to make for Run #%d?\n", j);
            scanf("%d", &adjs);
            if (adjs < 5)
                succ++;
            }
        // End result of the first loop
        printf("\nDay #%d: There were %d successful simulations.\n\n\n", i, succ);
        succ=0;
        }

return 0;
}
