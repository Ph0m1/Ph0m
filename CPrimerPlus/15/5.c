#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

char *toStr(unsigned int x, char *p);
unsigned int rotate_l(unsigned int x, int n);

int main(int argc, char *argv[])
{
    unsigned int val = 1;
    printf("%u", rotate_l(val, 4));
}

char *toStr(unsigned int x, char *p)
{
    int sz = 8 * sizeof(int);
    for (int i = sz - 1; i >= 0; --i, x >>= 1)
    {
        p[i] = (x & 1) + '0';
    }
    p[sz] = '\0';
    return p;
}

int StrToDec(char *p)
{
    int val = 0;
    while (*p)
    {
        val = val * 2 + (*p++) - '0';
    }
    return val;
}

unsigned int rotate_l(unsigned int x, int n)
{
    char bstr[8 * sizeof(unsigned int) + 1] = {};
    toStr(x, bstr);
    char p1[n + 1] = {};
    snprintf(p1, n + 1, "%s", bstr);
    printf("%s\n", p1);
    char *ar1 = bstr;
    char *ar2 = bstr + n;
    char *ar3 = p1;
    for (int i = 0; i < 8 * sizeof(unsigned int) + 1 - n; i++)
    {
        *ar1++ = *ar2++;
    }
    ar1--;
    for (int i = 0; i < n; i++)
    {
        *ar1++ = *ar3++;
    }
    return StrToDec(bstr);
}