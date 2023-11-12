#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char* argv[])
{
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i += 2)
    {
        for (int j = 2; j < i / 2 + 1;j++)
        {
            if(i % j == 0)
                printf("%d\t", i);
        }
    }
}