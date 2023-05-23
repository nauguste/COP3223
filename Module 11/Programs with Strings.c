#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char curname[20], firstname[20];
    int num, i, j;

    printf("How many students are there?\n");
        scanf("%d",  &num);

    printf("Enter the names of the students, one per line.\n");

    for (i = 0; i < num; i++)
    {
        scanf("%s", curname);

        for(j = 0; j<strlen(curname); j++)
            curname[j] = toupper(curname[j]);

        if(i == 0)
            strcpy(firstname, curname);
        else if(strcmp(curname, firstname) < 0)
            strcpy(firstname, curname);
    }

    printf("%s should be the line leader!", firstname);


    return 0;
}
