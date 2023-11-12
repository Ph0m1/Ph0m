#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int i = 0;
int j = 0;
int count = 0;
int main(int argc, char *argv[])
{
    char p[100];
    
    for (i = 0; p[i-1] != '#' && p[i-1] != '\n'; i++)
    {
        p[i] = getchar();
        if (p[i] == 'i' && p[i - 1] == 'e')
            count++;
    }
    printf("%d", count);
}