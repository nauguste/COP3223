// Mars Malfunction!
// Naseem Auguste COP3223 Online
// Professor Angell
// November 1, 2019


#include <stdio.h>
#define INTEGER 7

int main()
{
// AccessCode, EntryCode, NumberCounter, MatchCorrectly, RightCode
int AC[7], EC[7], NC = 0 , MC =0, RC =0, i, j;
char filename[50];

FILE * ifp;

// Prompt user for file name
printf ("What is the name of the file?\n");
scanf ("%s", &filename);

ifp = fopen(filename,"r");

// Scan in user file
for (i=0; i < INTEGER; i++)
    fscanf (ifp, "%d", &AC[i]);

printf("\n\nALERT!!!! ALERT!!!!\n");
printf("The Automatic Deployment Software has been compromised.\n");
printf("For security, you will need to enter in a code with numbers in the range of 1 to 100, inclusively.\n\n");

// Ask user for the access code
printf("Please enter the shuttle password...\n\n");
for (i=0; i < INTEGER; i++)
    scanf("%d", &EC[i]);


// check for duplicate numbers
for (i=0; i < INTEGER; i++)
    for (j=i+1; j <INTEGER; j++)
        if (EC[i] == EC[j])
            NC++;

// check for number order
for (i=0; i < INTEGER; i++)
    for (j=0; j < INTEGER; j++)
        if ( AC[i] == EC[j])
            RC++;

// checking if input is correct
for (i=0; i < INTEGER; i++)
    if ( AC[i] == EC[i])
        MC++;

// Run print statements according to the conditions
if (MC == INTEGER)
    printf("ACCESS GRANTED\nShuttle Doors Opening...\n");
else if (NC > 0)
    printf("Each value may only be used once.\n\n");
else if (RC > 0)
    printf("%d of those values are present in the access code, but are not in the proper sequence.\n\n", RC);
else if (MC == 0 && RC == 0)
    printf("None of those values are present in the access code.\n\n");
if (MC != INTEGER)
    // RErun the program if the code isn't correct
    while (MC != 7)
    {
        NC = 0, RC = 0, MC = 0;

        printf("Please enter the correct shuttle password...\n");
            for (i=0; i < INTEGER; i++)
                scanf("%d", &EC[i]);

            for (i=0; i < INTEGER; i++)
                for (j=i+1; j <INTEGER; j++)
                    if (EC[i] == EC[j])
                        NC++;

            for (i=0; i < INTEGER; i++)
                for (j=0; j < INTEGER; j++)
                    if ( AC[i] == EC[j])
                        RC++;

            for (i=0; i < INTEGER; i++)
                if ( AC[i] == EC[i])
                    MC++;

            if (MC == INTEGER)
                printf("ACCESS GRANTED\nShuttle Doors Opening...\n");
                    else if (NC > 0)
                printf("Each value may only be used once.\n\n");
                    else if (RC > 0)
                printf("%d of those values are correct, but are not in the proper sequence.\n\n", RC);
                    else if (MC == 0 && RC == 0)
                printf("None of those values are correct.\n\n");
    }

return 0;
}

