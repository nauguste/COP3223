#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 50
#define SIZE 20

int main()
{

/*

float miles[10];
int i;

for(i=0; i<10;  i++)
    miles[i]= i * 2;

for(i=0; i<10;  i++)
    printf("Index %d: %.2f\n", i, miles[i]);

    printf("\n----\n\n");

for(i=9; i>=0; i--)
    printf("Index %d: %.2f\n", i, miles[i]);

*/

/*

int numbers[10];
int i, header, min, max, sum, search, found = 0;
float avg;
FILE * ifp = fopen("numbers.txt", "r");

fscanf(ifp, "%d", &header);


for(i=0; i<10; i++)
    fscanf(ifp, "%d", &numbers[i]);


for(i=0; i<10;  i++)
    printf("Index %d: %d\n", i, numbers[i]);

sum = 0;
for(i=0; i<10; i++)
    sum += numbers[i];

    printf("\n");

avg = sum / (float) header;
printf("The average of these values are %.2f.\n", avg);

min = numbers[0];
for(i=1; i<10; i++)
    if (numbers[i]< min)
        min = numbers [i];
printf("The smallest of these values is %d.\n", min);


max = numbers[0];
for(i=1; i<10; i++)
    if (numbers[i]> max)
        max = numbers [i];
printf("The largest of these values is %d.\n", max);

printf("What are you searching for?\n");
scanf("%d", &search);

for(i=0; i<10; i++)
    if (numbers[i] == search)
    found =1;

if (found)
    printf("%d was in the array!\n", search);
else
    printf("%d was not found.\n", search);

    fclose(ifp);

*/

int unsorted[SIZE], sorted[SIZE];
int i,  j, min, indexmin;

srand(time(0));

for (i=0; i<SIZE; i++)
    unsorted[i] = rand() % 50 + 1;

for (i=0; i<SIZE; i++)
    printf("%d\n", unsorted[i]);

for(i=0; i<SIZE; i++)
    {


    min = unsorted[0];
    indexmin = 0;

for(j=1; j<SIZE; j++)
    if (unsorted[j] < min)
{
    min = unsorted[j];
    indexmin = j;
}
    sorted[i]= min;
    unsorted[indexmin] = MAX +1;
    }

    printf("\n----\n\nSorted:\n");

    for(i=0; i<SIZE; i++)
        printf("%d\n", sorted[i]);

return 0;
}
