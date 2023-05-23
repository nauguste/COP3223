#include <stdio.h>

#define ROW 5
#define COL 12

int main()
{

int table[ROW][COL];
int i, j;

for (i=0; i<ROW; i++)
    for (j=0; j<COL;  j++)
        table[i][j] = (i+1) * (j+1);

for(i=1; i<=COL; i++)
    printf("     %2d", i);

    printf("\n");

for(i=0; i<ROW; i++)
    {
    printf("%d     %d", i+1, table[i][0]);

    for(j=1; j<COL; j++)
    printf("     %2d", table[i][j]);

    printf("\n");
    }







return 0;
}
