// Supplying the Mars Expedition!
// Naseem Auguste COP3223 Online
// Professor Angell
// September 26, 2019

// Pre-processor Directives
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // num = the number for the best supplier
    // bestp = best price
    char Y, N, choice;
    int num = 1, i = 1;
    float price, bestp;

    // Ask user for the first supplier
    printf("What is the price for supplier #%d?\n", i);
    scanf("%f", &bestp);
    i++;

    // Prompt the user a choice to see if they want to add more suppliers
    // If choice is "N" then end the loop
    while (choice != 'N')
        {
        switch(choice)
            {
        case 'Y':
        printf("What is the price for supplier #%d?\n", i);
        scanf("%f", &price);
        // Find best price by finding the lowest inputted price
        // Find best supplier by copying the increment value at that instance
        if (price < bestp)
            {
        bestp = price;
        num = i++;
            }
        else
        i++;
        break;


        case 'N':
        break;


            }
    // Prompt the user a choice to see if they want to add more suppliers
    // If choice is "N" then end the loop
    printf("Are there any other suppliers?\n");
    printf("Reply with 'Y' for yes.\n");
    printf("Reply with 'N' for no.\n");
    scanf(" %c", &choice);
        }

    // Display final result
    printf("Supplier #%d is your best option at : $%.2f.\n", num, bestp);

    return 0;
}

