#include <stdio.h>
#include "myMath.h"
#include "basicMath.c"
#include "power.c"

int main()
{

double f1;
double f2;
double f3;
double doubleX;
int intX;

printf("pleas enter a real number:");
scanf("%lf", &doubleX);

intX = (int)doubleX;

f1 = sub(add(Exponent(intX), Power(doubleX, 3)), 2);
f2 = add(mul(doubleX, 3), mul(Power(doubleX, 2), 2));
f3 = sub(div(mul(Power(doubleX, 3), 4), 5), mul(doubleX, 2));

printf("the value of f(x) = e^x + x^3 - 2 at the point %0.4lf is: %0.4lf\n", doubleX, f1);
printf("the value of f(x) = 3x + 2x^2 at the point %0.4lf is: %0.4lf\n", doubleX, f2);
printf("the value of f(x) = (4x^3)/5 - 2x at the point %0.4lf is: %0.4lf\n", doubleX, f3);
 
}