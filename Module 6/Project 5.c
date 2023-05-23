// Mars Mechanical Manufacturing!
// Naseem Auguste COP3223 Online
// Professor Angell
// October 18, 2019

#include <stdio.h>

int main()

{
FILE * ifp; // File Pointer

int A = 0, B = 0, C = 0, i = 0, bots, ID;
float X = 1000, Y = 100, Z = 0, Cost, Eff, Batt;

char filename[50];

// Ask user for file name/directory

printf ("What is the name of the file?\n");
scanf ("%s", &filename);

// Open File

ifp = fopen(filename,"r");

// Read in the potential number of bots

fscanf( ifp, "%d", &bots);

//For every bot, read in the cost, efficiency and battery life
//If "Cost" is lower than the indexed lowest cost amount(X) then update it
//If "Eff" is lower than the indexed lowest efficiency rating(Y) then update it
//If "Batt" is higher than the indexed lowest cost amount(Z) then update it

for (i=0; i < bots; i++)
{
    fscanf (ifp, "%d", &ID);

    fscanf (ifp, "%f", &Cost);

        if (Cost < X)
            {
            X = Cost;
            A = ID;
            }

    fscanf (ifp, "%f", &Eff);

        if (Eff < Y)
            {
            Y = Eff;
            B = ID;
            }

    fscanf (ifp, "%f", &Batt);

        if (Batt > Z)
            {
            Z = Batt;
            C = ID;
            }
}

// Print results

printf("Specification\tBest Machine\tOptimal Value");
printf("\n------------------------------------------\n");
printf("Cost\t\t%d\t\t%.2f\n",A, X);
printf("Efficiency\t%d\t\t%.2f\n",B, Y);
printf("Battery\t\t%d\t\t%.2f\n",C, Z);

// If a robot excels in 2 or more categories then commend them!

if(A == B)
    printf ("\nAutomaton %d has 2 or maximal specifications!\n", A);
else if(A == C)
    printf ("\nAutomaton %d has 2 or maximal specifications!\n", A);
else if(B == C)
    printf ("\nAutomaton #%d has 2 or maximal specifications!\n", B);

// Close File

fclose (ifp);
return 0;
}
