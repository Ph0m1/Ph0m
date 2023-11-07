#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char* argv[])
{
    int count, sum;
    int n;
    count = 0;
    sum = 0;
    printf("请输入天数：");
    scanf("%d", &n);
    while (count++ < n)
        sum = sum + count;
    printf("sum = %d\n", sum);
    return 0;
}