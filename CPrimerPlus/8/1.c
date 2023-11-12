#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char* argv[])
{
    int count = 0;
    char ch;
    while (ch = getchar() != EOF)
    {
        count++;
        putchar(ch);
    }
    printf("%d", count);
}