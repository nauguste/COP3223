#include <stdio.h>
#include <math.h> //math library

int main ()
{
/*

//math library <math.h> contains the power function
//double pow(oduble x, double y);
//returns x^y




//(int) abs = absolute value  (integer only)
int a = -240;
int b;
b = abs(a);
printf("the absolute value of %d is %d.\n", a, b);


//double sqrt = square root
int A = 36;
float B;
B = sqrt(A);
printf("the absolute value of %d is %.2f.\n", A, B);

float x1, x2, y1, y2, d;
printf("x2=");
scanf("%f", &x2);

printf("x1=");
scanf("%f", &x1);

printf("y2=");
scanf("%f", &y2);

printf("y1=");
scanf("%f", &y1);
d = sqrt(pow((x2-x1), 2)+pow((y2-y1), 2));

printf("the distance between values %f, %f and %f, %f is %f.\n",x2, x1, y2, y1, d);

*/

//modulus operator is represented by the % symbol
//it calculates the remainder of one integer divided by another
//ex: 19%6=1
//ex: 16%4=0
//ex: 19%200=19

/*

int a = 20, b = 5,c;

c = a%b;

printf("Remainder of %d and %d is %d.\n",a, b, c);

*/


//modulus has the same precedence as division
// and multiplication in the order of operations

/*

int M, b, m;
printf("How many bullets do you have?\n");
scanf("%d", &M);

m = M / 60;
b = M % 60;

printf("You have %d mags and %d bullets remaining.\n", m, b);

*/

return 0;
}
