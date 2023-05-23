// Expedition to Mars!
// Naseem Auguste COP3223 Online
// Professor Angell
// September 9, 2019

// Preprocessor Directives
#include <stdio.h>
#include <math.h>

// Abbreviated Distance Per Day
#define DPD 261904

// Abbreviated Fuel Per Day
#define FPD 11000

int main ()
{

    double Days, Fuel_Needed, Distance;

    // Introduction
    printf("Welcome traveler!\n");

    // Ask user for distance input
    printf("How many miles away is Mars?\n");
    scanf("%lf", &Distance);

    // Divide distance by max amount of miles traveled per day
    Days = Distance / DPD;

    // Multiply days by how much fuel is used per day.
    Fuel_Needed = (Days * FPD);

    // Add 20% compensation for contingency
    Fuel_Needed = Fuel_Needed * 1.2;

    // Display results
    printf("The estimated travel time for your trip is %.1lf days.\n", Days);
    printf("The amount of fuel needed for your trip is %.2lf pounds.\n", Fuel_Needed);

    return 0;
}
