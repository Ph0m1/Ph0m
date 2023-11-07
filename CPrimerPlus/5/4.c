#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    
    while (1)
    {
        int days;
        printf("请输入天数：");
        scanf("%d", &days);
        if (days <= 0) break;
        printf("%d days are %d weeks, %d days.\n", days, days / 7, days % 7);
    }
}