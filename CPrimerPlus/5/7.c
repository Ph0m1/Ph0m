#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int func(double n);

int main(int argc, char* argv[])
{
    double a;
    scanf("%lf", &a);
    func(a);
    return 0;
}

int func(double n)
{
    printf("%.0lf", n * n * n);
}