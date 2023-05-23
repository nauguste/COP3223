//Trapezoid

#include <stdio.h>
#define PI 3.14

int main()
{
/*

float a, b, h, A;

printf("What is the value of a?\n");
scanf("%f", &a);

printf("What is the value of b?\n");
scanf("%f", &b);

printf("What is the value of h?\n");
scanf("%f", &h);

A = 0.5 * (a + b) * h;
printf("The area of your trapezoid is %.2f.\n", A);

*/

/*

float a, b, h, A;

printf("What is the value of a?\n");
scanf("%f", &a);

printf("What is the value of b?\n");
scanf("%f", &b);

printf("What is the value of h?\n");
scanf("%f", &h);

A = (float) 1/2 * (a + b) * h;
printf("The area of your trapezoid is %.2f.\n", A);

*/

float r, V;

printf("What is the radius?\n");
scanf("%f", &r);

V = (float) 2/3 * PI * (r*r*r);
printf("The volume of the hemisphere is %f.\n", V);

/*

math library <math.h> contains the power function
double pow(oduble x, double y);
returns x^y
i.e pow(r, 3)




(int) abs = absolute value  (integer only)
int x = -240
int y;
y = abs(x);
printf("the absolute value of %d is %d.\n", x, y);


double sqrt = square root
int x = 36;
float y;
y = sqrt(x)
printf("the absolute value of %d is %.2f.\n", x, y);

*/

return 0;
}
