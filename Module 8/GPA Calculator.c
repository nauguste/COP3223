#include <stdio.h>

int CompGrade(char grade);
int main()
{

int points = 0, hours = 0, credits = 0;
char MyGrade, ans = 'y';

while (ans == 'y' || ans == 'Y')
{
    printf("Enter your letter grade.\n");
    scanf (" %c", &MyGrade);

    printf("Enter the number of credit hours.\n");
    scanf (" %d", &credits);

    points += credits * CompGrade(MyGrade);
    hours += credits;

    printf("Do you have another grade to enter? (Y/N)\n");
    scanf (" %c", &ans);
}

printf("Your GPA is %.2lf.\n", (double)points/hours);


return 0;
}

int CompGrade(char grade)
{
    if (grade == 'A')
        return 4;
    else if (grade == 'B')
        return 3;
    else if (grade == 'C')
        return 2;
    else if (grade == 'D')
        return 1;
    else if (grade == 'F')
        return 0;
    else
        return -1;
}
