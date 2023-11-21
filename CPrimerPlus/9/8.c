#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

double power(double n, int p);

int main(int argc, char *argv[])
{
    double n;
    int p;
    scanf("%lf %d", &n, &p);
    printf("%.3lf", power(n, p));
}

double power(double n, int p)
{
    double pow = 1;
    int i;
    if (p > 0)
        for (i = 1; i <= p; i++)
            pow *= n;
    else if (p == 0)
        {if (n == 0)
            printf("0^0 was undefined! ");
        return 1;}
    else
    {
        p = -p;
        for (i = 1; i <= p; i++)
            pow *= n;
        pow = 1.0 / pow;
    }
    return pow;
}