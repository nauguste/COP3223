#include <stdio.h>

int menu();
float process(int cookie);
float buy(float price);
void end(float total);
int main()
{

int ans;
float total = 0, price;

ans = menu();

while (ans != 4)
{
price = process(ans);

if (price != 0.0)
    total += buy(price);

    ans = menu();
}


end(total);

return 0;
}

int menu()
{
 int choice;

printf("   Cookie: \t Cost:\n");
printf("1: Thin Mint \t $3.00\n");
printf("2: Samoas \t $2.50\n");
printf("3: Shortbread \t $2.00\n\n");
printf("4: Quit...\n\n");

printf("Which would you like?\n");
scanf("%d", &choice);

return choice;
}
float process(int cookie)
{
    if (cookie == 1)
    {
    printf("Thin Mints are $3.50 per box.\n");
        return 3.5;
    }
    else if (cookie == 2)
    {
    printf("Samoas are $3.00 per box.\n");
        return 3.0;
    }
    else if (cookie == 3)
    {
    printf("Shortbread are $2.50 per box.\n");
        return 2.5;
    }
    else if (cookie == 4)
        ;
    else
    {
    printf("Sorry that was not a valid option.\n");
    }

    return 0;
}
float buy(float price)
{
    float total;
    int boxes;

printf("How many boxes would you like?\n");
scanf("%d", &boxes);

total = boxes * price;

return total;
}

void end(float total)
{
    printf("You total is $%.2f.\n", total);
    printf("Thank you for shopping!\n");
    return;
}
