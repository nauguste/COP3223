// Finishing Mars!
// Naseem Auguste COP3223 Online
// Professor Angell
// December 3, 2019

// Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Structures
struct robot
{
    int range;
    int capacity;
};

struct map
{
    int depth;
    int ice;
};

// Global variables & arrays
struct robot Bot[4];
struct map Spot[3][3];
int fin;

// Functions
void Robot();
void Map();
int Update();
int Finish();


int main()
{
    char filename[50];
    int i, j;

    FILE * ifp;

    // Introduction
    printf("Colony is now fully built and awaits human habitation.\n");
    printf("We must search the area for ice so humans can thrive here.\n\n");

    // Prompt user for file name
    printf("Cartographer Bot: Awaiting Map Input...\n");
    scanf("%s", &filename);
    ifp = fopen(filename,"r");

    // Scan in the map and depth
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            fscanf(ifp, "%d%d", &Spot[i][j].depth, &Spot[i][j].ice);

    // Scan in the robots and stats
    for(i = 1; i < 5; i++)
        fscanf(ifp, "%d%d", &Bot[i].range, &Bot[i].capacity);

    fclose(ifp);

    // Set finisher flag to 0
    fin = 0;

    // Call functions
    Robot();
    Update();

    // If finisher != 1 then loop the program
    while (fin != 1)
    {
        Robot();
        Update();
    }

    // Conclusion
    if (fin == 1)
        printf("\n\nAll ice in this zone has been obtained. Returning to colony...\n");
    return 0;
}

// Scans in info for the robots
void Robot()
{
    int i;

    printf("Droid #\tRange\tStorage\n");

    for(i = 1; i < 5; i++)
       printf("%d\t%d\t%d\n", i, Bot[i].range, Bot[i].capacity);

    printf("\n");

    return;
}

// Scans in info for the map
void Map()
{
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if (Spot[i][j].depth > 0)
                printf("%du\t", Spot[i][j].depth);
            else if (Spot[i][j].ice > 0)
                printf("%di\t", Spot[i][j].ice);
            else
                printf("-\t");
        }
        printf("\n");
    }
}


// Displays and Updates the Map function
// Prompts the user for tasks
// Determine if a robot can complete a task
int Update()
{
    int i, a, b, deep, carry;

    for(i = 1; i < 5; i++)
    {
        // End loop if fin is flagged
        if (fin == 1)
            return;
        Map();
        printf("\nWhere would you like to send Icedroid #%d?\n", i);
        scanf("%d %d", &a, &b);
        a--;
        b--;


        if (Spot[a][b].depth > 0)
        {
                if(Spot[a][b].depth <= Bot[i].range)
                {
                    deep = 0;
                    Spot[a][b].depth = deep;
                    printf("\nThe Icedroid has scanned this sector and detected some ice.\n");
                }
                else
                    printf("The Icedroid has failed to detect any ice.\n");

        }
        else if (Spot[a][b].ice > 0)
        {
            if (Spot[a][b].ice <= Bot[i].capacity)
            {
                printf("\nThe Icedroid has obtained all the remaining ice.\n");
                carry = Spot[a][b].ice - Bot[i].capacity;
                Spot[a][b].ice = carry;
            }
            else
            {
                printf("\nThe Icedroid retrieves some ice.\n");
                carry = Spot[a][b].ice - Bot[i].capacity;
                Spot[a][b].ice = carry;
            }
        }
        else
            printf("\nIcedroid does not detect any remaining ice.\n");
            Finish();
    }
}

// Reads all the ice locations and sees if they are empty
// If yes mark the fin flag with a 1
int Finish()
{
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if (Spot[i][j].ice > 0)
            {
                fin = 0;
                return 0;
            }
            else
            {

            }
        }
    }
    fin = 1;
    return 1;
}
