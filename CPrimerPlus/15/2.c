#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int StrToDec(char *p);
char *toStr(int n, char *p);

int main(int argc, char *argv[])
{
    char bstr[8 * sizeof(int) + 1];
    int v1 = StrToDec(argv[1]);
    int v2 = StrToDec(argv[2]);
    printf("~%s = %s\n", argv[1], toStr(~v1, bstr));
    printf("~%s = %s\n", argv[2], toStr(~v2, bstr));
    printf("%s & %s = %s\n", argv[1], argv[2], toStr(v1 & v2, bstr));
    printf("%s | %s = %s\n", argv[1], argv[2], toStr(v1 | v2, bstr));
    printf("%s ^ %s = %s\n", argv[1], argv[2], toStr(v1 ^ v2, bstr));
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
char *toStr(int n, char *p){
    int sz = 8 * sizeof(int);
    for (int i = sz - 1; i >= 0; --i, n >>= 1)
    {
        p[i] = (n & 1) + '0';
    }
    p[sz] = '\0';
    return p;
}
