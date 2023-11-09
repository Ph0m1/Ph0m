#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double temp = 0;
int main(int argc, char *argv[])
{
    double p[8], q[8];
    printf("请输入八个数字：\n");
    for (size_t i = 0; i < 8; i++)
    {
        scanf("%lf", &p[i]);
    }
    for (size_t i = 0; i < 8; i++)
    {
        temp += p[i];
        q[i] = temp;
    }
    for (size_t i = 0; i < 8; i++)
    {
        printf("%lf\t", p[i]);
    }
    printf("\n");
    for (size_t i = 0; i < 8; i++)
    {
        printf("%lf\t", q[i]);
    }
}