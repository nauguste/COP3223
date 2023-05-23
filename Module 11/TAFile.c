// Making Mars!
// Naseem Auguste COP3223 Online
// Professor Angell
// December 3, 2019

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct robot
{
int range;
int capacity;
};

struct map
{
int range;
int ice;
};

void Print1(struct robot Bot);
void Print2(struct robot * Bot);
void Map1(struct map  Spot);
void Map2(struct map * Spot);
int menu();



int main()
{
    char filename[50];
    struct robot Bot[4];
    struct map Spot[9];
    int i, x, y;

    FILE * ifp;

    // Prompt user for file name
    printf("Colony is now fully built and awaits human habitation.\n");
    printf("We must search the area for ice so humans can thrive here.\n\n");
    printf ("Cartographer Bot: Awaiting Map Input...\n");
    scanf ("%s", &filename);

    ifp = fopen(filename,"r");

    for(i=1; i<10; i++)
        {
        fscanf(ifp, "%d", &Spot[i].range);
        fscanf(ifp, "%d", &Spot[i].ice);
        }

    for(i=1; i<5; i++)
        {
        fscanf(ifp, "%d", &Bot[i].range);
        fscanf(ifp, "%d", &Bot[i].capacity);
        }

    fclose(ifp);

    Print2(Bot);
    Map2(Spot);
    menu();


    return 0;
}

void Print1(struct robot Bot)
{
    int i;
    if(i > 4)
        i=1;
    else if (i < 5)
        i++;

    printf("%d\t%d\t%d\n", i, Bot.range, Bot.capacity);

    return;
}

void Print2(struct robot * Bot)
{
    int i;

    printf("Droid #\tRange\tStorage\n");

    for(i = 1; i < 5; i++)
        Print1(Bot[i]);

    printf("\n");

    return;
}

void Map1(struct map Spot)
{


    printf("%d\t", Spot.range);

    return;
}

void Map2(struct map * Spot)
{
    int i;

    for(i = 1; i < 4; i++)
        Map1(Spot[i]);

    printf("\n");

    for(i = 4; i < 7; i++)
        Map1(Spot[i]);

    printf("\n");

    for(i = 7; i < 10; i++)
        Map1(Spot[i]);

    printf("\n");

    return;
}

int menu()
{
    int location, i, x, y;

    for(i=1; i < 5; i++)
    {
        printf("Where would you like to send robot %d?", i);
        scanf("%d %d", &x, &y);
    }

    return x, y;
}














//
    if (10>c)
    {
        10++;
    }
//


























// Making Mars!
// Naseem Auguste COP3223 Online
// Professor Angell
// December 3, 2019

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct robot
{
int range;
int capacity;
};

struct map
{
int range;
int ice;
};

void Print1(struct robot Bot);
void Print2(struct robot * Bot);
int menu();



int main()
{
    char filename[50];
    struct robot Bot[4];
    struct map Spot[3][3];
    int i, j, x, y;

    FILE * ifp;

    // Prompt user for file name
    printf("Colony is now fully built and awaits human habitation.\n");
    printf("We must search the area for ice so humans can thrive here.\n\n");
    printf ("Cartographer Bot: Awaiting Map Input...\n");
    scanf ("%s", &filename);

    ifp = fopen(filename,"r");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++);
        {
        fscanf(ifp, "%d", &Spot[i][j].range);
        fscanf(ifp, "%d", &Spot[i][j].ice);
        }
    }

    for(i=1; i<5; i++)
        {
        fscanf(ifp, "%d", &Bot[i].range);
        fscanf(ifp, "%d", &Bot[i].capacity);
        }
    fclose(ifp);





    Print2(Bot);

 for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++);
        printf("%d\t", Spot[i][j].range);

    menu();


    return 0;
}

void Print1(struct robot Bot)
{
    int i;
    if(i > 4)
        i=1;
    else if (i < 5)
        i++;

    printf("%d\t%d\t%d\n", i, Bot.range, Bot.capacity);

    return;
}

void Print2(struct robot * Bot)
{
    int i;

    printf("Droid #\tRange\tStorage\n");

    for(i = 1; i < 5; i++)
        Print1(Bot[i]);

    printf("\n");

    return;
}


int menu()
{
    int location, i, x, y;

    for(i=1; i < 5; i++)
    {
        printf("Where would you like to send robot %d?", i);
        scanf("%d %d", &x, &y);
    }

    return x, y;
}












































// Finishing Mars!
// Naseem Auguste COP3223 Online
// Professor Angell
// December 3, 2019

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct robot
{
int range;
int capacity;
};

struct map
{
int range;
int ice;
};

void Print1(struct robot Bot);
void Print2(struct robot * Bot);
int menu();



int main()
{
    char filename[50];
    struct robot Bot[4];
    struct map Spot[9];
    int i, x, y;

    FILE * ifp;

    // Prompt user for file name
    printf("Colony is now fully built and awaits human habitation.\n");
    printf("We must search the area for ice so humans can thrive here.\n\n");
    printf ("Cartographer Bot: Awaiting Map Input...\n");
    scanf ("%s", &filename);

    printf("\n");

    ifp = fopen(filename,"r");

    for(i=1; i<10; i++)
        {
        fscanf(ifp, "%d", &Spot[i].range);
        fscanf(ifp, "%d", &Spot[i].ice);
        }

    for(i=1; i<5; i++)
        {
        fscanf(ifp, "%d", &Bot[i].range);
        fscanf(ifp, "%d", &Bot[i].capacity);
        }
    fclose(ifp);





    Print2(Bot);// Finishing Mars!
// Naseem Auguste COP3223 Online
// Professor Angell
// December 3, 2019

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct robot
{
int range;
int capacity;
};

struct map
{
int range;
int ice;
};

void Print1(struct robot Bot);
void Print2(struct robot * Bot);
int menu();



int main()
{
    char filename[50];
    struct robot Bot[4];
    struct map Spot[9];
    int i, x, y;

    FILE * ifp;

    // Prompt user for file name
    printf("Colony is now fully built and awaits human habitation.\n");
    printf("We must search the area for ice so humans can thrive here.\n\n");
    printf ("Cartographer Bot: Awaiting Map Input...\n");
    scanf ("%s", &filename);

    printf("\n");

    ifp = fopen(filename,"r");

    for(i=1; i<10; i++)
        {
        fscanf(ifp, "%d", &Spot[i].range);
        fscanf(ifp, "%d", &Spot[i].ice);
        }

    for(i=1; i<5; i++)
        {
        fscanf(ifp, "%d", &Bot[i].range);
        fscanf(ifp, "%d", &Bot[i].capacity);
        }
    fclose(ifp);





    Print2(Bot);

    printf("%du\t", Spot[1].range);
    printf("%du\t", Spot[2].range);
    printf("%du\t", Spot[3].range);
            printf("\n");
    printf("%du\t", Spot[4].range);
    printf("%du\t", Spot[5].range);
    printf("%du\t", Spot[6].range);
            printf("\n");
    printf("%du\t", Spot[7].range);
    printf("%du\t", Spot[8].range);
    printf("%du\t", Spot[9].range);
            printf("\n\n");

    switch (menu())
    {
        case 1
    }


    return 0;
}

void Print1(struct robot Bot)
{
    int i;
    if(i > 4)
        i=1;
    else if (i < 5)
        i++;

    printf("%d\t%d\t%d\n", i, Bot.range, Bot.capacity);

    return;
}

void Print2(struct robot * Bot)
{
    int i;

    printf("Droid #\tRange\tStorage\n");

    for(i = 1; i < 5; i++)
        Print1(Bot[i]);

    printf("\n");

    return;
}


int menu()
{
    int location, i, x, y;

    for(i=1; i < 5; i++)
    {
        printf("Where would you like to send robot %d?\n", i);
        scanf("%d %d", &x, &y);
        printf("\n");

        if(x == 1 && y == 1)
            location = 1;
        if(x == 1 && y == 2)
            location = 2;
        if(x == 1 && y == 3)
            location = 3;
        if(x == 2 && y == 1)
            location = 4;
        if(x == 2 && y == 2)
            location = 5;
        if(x == 2 && y == 3)
            location = 6;
        if(x == 3 && y == 1)
            location = 7;
        if(x == 3 && y == 2)
            location = 8;
        if(x == 3 && y == 3)
            location = 9;



    }

    return location;
}


    printf("%du\t", Spot[1].range);
    printf("%du\t", Spot[2].range);
    printf("%du\t", Spot[3].range);
            printf("\n");
    printf("%du\t", Spot[4].range);
    printf("%du\t", Spot[5].range);
    printf("%du\t", Spot[6].range);
            printf("\n");
    printf("%du\t", Spot[7].range);
    printf("%du\t", Spot[8].range);
    printf("%du\t", Spot[9].range);
            printf("\n\n");

    switch (menu())
    {
        case 1
    }


    return 0;
}

void Print1(struct robot Bot)
{
    int i;
    if(i > 4)
        i=1;
    else if (i < 5)
        i++;

    printf("%d\t%d\t%d\n", i, Bot.range, Bot.capacity);

    return;
}

void Print2(struct robot * Bot)
{
    int i;

    printf("Droid #\tRange\tStorage\n");

    for(i = 1; i < 5; i++)
        Print1(Bot[i]);

    printf("\n");

    return;
}


int menu()
{
    int location, i, x, y;

    for(i=1; i < 5; i++)
    {
        printf("Where would you like to send robot %d?\n", i);
        scanf("%d %d", &x, &y);
        printf("\n");

        if(x == 1 && y == 1)
            location = 1;
        if(x == 1 && y == 2)
            location = 2;
        if(x == 1 && y == 3)
            location = 3;
        if(x == 2 && y == 1)
            location = 4;
        if(x == 2 && y == 2)
            location = 5;
        if(x == 2 && y == 3)
            location = 6;
        if(x == 3 && y == 1)
            location = 7;
        if(x == 3 && y == 2)
            location = 8;
        if(x == 3 && y == 3)
            location = 9;



    }

    return location;
}
