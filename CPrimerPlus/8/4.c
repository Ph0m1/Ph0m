#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main(int argc, char* argv[])
{
    char ch;
    int count = 0;
    double sum = 0;
    int i = 0;
    do{
        ch = getchar();
        if(!isalpha(ch))
        {
            sum += count;
            count = 0;
            i++;
            continue;
        }
        count++;
    } while (ch != EOF);
    printf("%.1f\n", sum / i);
}