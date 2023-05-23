#include <stdio.h>

int main()

{

int score;
printf("What was your score?\n");
scanf("%d", &score);

if (score > 300)
    printf("Stop cheating.\n");
else if  (score > 250 && score <= 300)
    printf("God Gamer!\n");
else if  (score >=200 && score <= 250)
    printf("Getting good...\n");
else

    printf("Get good mate :/\n");








return 0;
}
