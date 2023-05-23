#include <stdio.h>

int main()
{

/*
FILE * IFP; //input file pointer
int i, header, val, sum=0;

IFP = fopen("Summation.txt", "r");

fscanf(IFP, "%d", &header);

for(i=0; i < header; i++)
{
    fscanf(IFP,"%D", &val);
    sum+= val;
}

printf("The sum of numbers in the file amounts to %d.\n", sum);

fclose(IFP);

*/

/*

FILE * EOO; // Even or odd
int header, num, i;

EOO = fopen("EOO.txt", "r");
fscanf(EOO, "%d", &header);

for(i=0; i < header; i++)
{
    fscanf(EOO, "%d", &num);

    if(num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
}

fclose(EOO);

*/

return 0;
}
