#include <stdio.h>

int main()
{

/*

float initprice, price, total = 0;
int initounces, ounces, times, i;

printf("What is the weight (in oz.) of the original container of OJ?\n");
scanf("%d", &initounces);

printf("What is the cost of the original container of OJ in dollars?\n");
scanf("%f", &initprice);

price =  initprice / initounces ;

printf("How many times did your roommate take your juice?\n");
scanf("%d", &times);

for (i=1; i<10; i++) {

printf("How much juice did your roommate take this time (in oz.)?\n");
scanf("%d", &ounces);

total += (price * ounces) ;

if(total >= 10 ) {

printf("Your roommate owes you $10.00.\n");
total = total -10;

}

}

printf("Your roommate owes you $%.2f.\n", total );

*/

/*

int count = 0;

while (count < 32) {

    printf("Hello\n");

    count = count+4;

}

*/

int sum = 0, index;

for (index = 0; index < 5; index++)
sum += 5;

printf("SUM: %d\n", sum);
printf("IND: %d\n", index);

return 0;
}
