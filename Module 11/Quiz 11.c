#include <stdio.h>
#include <string.h>
#include <ctype.h>

void swap(int * ptrA, int * ptrB);
void GnomeSort(int gnomes[], int length);

int main()
{
int i, gnomes[5]= {5,7,2,1,9};



void swap(int* ptrA, int* ptrB);

for(i=0; i < 5; i++)
    printf("%d\n", gnomes[i]);

void GnomeSort(int gnomes[], int length);

for(i=0; i < 5; i++)
    printf("\n%d\n", gnomes[i]);


return 0;
}


void GnomeSort(int gnomes[], int length)
{
int pos = 1;
while(pos < length)
{
if(gnomes[pos] >= gnomes[pos-1])
    pos++;
else
{
    swap(gnomes[pos], gnomes[pos-1]);
    if(pos > 1)
        {
        pos--;
        }
}
}
return gnomes;
}

void swap(int* ptrA, int* ptrB)
{

int temp = *ptrA;
*ptrA = *ptrB;
*ptrB = temp;
return;

}
