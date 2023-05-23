//Calculator

#include <stdio.h>
#define INCHES 12
#define FEET 5280

int main()
{

    // int assignment is variable
    // ipf fpm should be constant
    //#define NAME <value>
    //scanf("<percent code>", &<variable>);
    //%d = integers
    //%f = float
    //%lf = double
    //%c = characters
    //& = at the address of (some variable)

    int ipf = 12;
    int fpm = 5280;
    int ipm;
    float nm;

    printf("Input number of miles?\n");
    scanf("%f", &nm);

    ipm = (INCHES * FEET) * nm;

    printf("The number of inches in %.0f miles is %d.\n", nm, ipm);

    //%.nf
    //n is the number of decimal places you want

    return 0;
}
