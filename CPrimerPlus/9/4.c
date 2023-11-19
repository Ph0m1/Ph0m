#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

double average(double a, double b);

int main(int argc, char *argv[])
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%lf",average(a, b));
}

double average(double a, double b)
{
    a = 1.0 / a;
    b = 1.0 / b;
    double num = (a + b) * 0.5;
    return 1.0 / num;
}