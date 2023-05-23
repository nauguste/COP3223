#include <stdio.h>

#define TM 3.00
#define SM 2.5
#define SB 2.00

int main()

{

/*
int A;

printf("File Menu:\n");
printf("\t1-New\n");
printf("\t2-Open\n");
printf("\t3-Save\n");
scanf("%d", &A);

if (A == 1)
    printf("New File...\n");
else if (A == 2)
    printf("Open File...\n");
else if (A ==3)
    printf("Save File...\n");
else
    printf("Not a valid option.\n");

*/

/*

switch(A)
{
case 1:
    printf("New File...\n");
    break;
case 2:
    printf("Open File...\n");
    break;
case 3:
    printf("Save File...\n");
    break;
default:
    printf("Not a valid option.\n");
    break;
}

*/

int flavor, boxes;
float total=0;

printf("Cookie: \t Cost:\n");
printf("1:Thin Mint \t $3.00\n");
printf("2:Samoas \t $2.50\n");
printf("3:Shortbread \t $2.00\n");
printf("4:Quit...\n");
scanf("%d", &flavor);

while (flavor != 4)
{
switch(flavor)
    {

case 1:
    printf("That will be $3 each.\n");
    printf("How many boxes would you like?\n");
    scanf("%d", &boxes);
    total = total + TM * boxes;
    printf("Your total will be %.2f.\n", total);
    break;

case 2:
    printf("That will be $2.50 each.\n");
    printf("How many boxes would you like?\n");
    scanf("%d", &boxes);
    total += SM * boxes;
    printf("Your total will be %.2f.\n", total);

    break;

case 3:
    printf("That will be $2 each.\n");
    printf("How many boxes would you like?\n");
    scanf("%d", &boxes);
    total += SB * boxes;
    printf("Your total will be %.2f.\n", total);
    break;
case 4:
    break;


default:
    printf("Not a valid option.\n");
    break;
    }

printf("Cookie: \t Cost:\n");
printf("1:Thin Mint \t $3.00\n");
printf("2:Samoas \t $2.50\n");
printf("3:Shortbread \t $2.00\n");
printf("4:Quit...\n");
scanf("%d", &flavor);

}
printf("Your final total is %.2f.\n", total);
printf("Have a nice day!");
return 0;
}
