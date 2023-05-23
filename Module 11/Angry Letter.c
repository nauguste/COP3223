#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE * ifp = NULL;
    char word[20], filename[20];
    int i, length;

    while (ifp == NULL)
    {
        printf("What is the name of the file?\n");
        scanf("%s", filename);
        ifp = fopen(filename, "r");
    }

    fscanf(ifp, "%s", word);

    while(strcmp(word, "Sarah")!= 0)
    {
        length = strlen(word);
        for(i=0; i < length; i++)
            word[i] = toupper(word[i]);

        if(ispunct(word[length-1]))
            word[length-1] = '!';

        if(strcmp(word, "SOMEWHAT")== 0)
            strcpy(word, "VERY");

        if(strcmp(word, "SOMETIMES")== 0)
            strcpy(word, "ALWAYS");

        if(strcmp(word, "GREAT")== 0)
            strcpy(word, "BAD");

        printf("%s ", word);
        fscanf(ifp, "%s", word);

    }









    fclose(ifp);
    return 0;
}
