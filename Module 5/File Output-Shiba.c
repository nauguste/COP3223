#include <stdio.h>

int main()
{

/*

FILE * OFP; // Output file pointer
OFP = fopen("output.txt", "w");

fprintf(OFP, "Howdy!\n");

fclose(OFP);

*/

FILE * I, * O;
int people, miles, i;

I=fopen("Input File 1.txt", "r");
O=fopen("Output File 1.txt", "w");

fscanf(I, "%d", &people);

for(i=0; i<people; i++)
{
    fscanf(I,"%d", &miles);
    fprintf(O, "person %d ran %d miles.\n", i+1, miles);
}
fclose(I);
fclose(O);


return 0;
}
