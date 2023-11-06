#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define X 3.785
#define Y 1.609

int main(char* argc,char*argv[])
{
    double a;
    double b;
    printf("请输入旅行的里程(英里)：");
    scanf("%lf", &a);
    printf("请输入旅行消耗的汽油量(加仑)：");
    scanf("%lf", &b);
    printf("%.1lf英里/加仑\n", a / b);
    printf("%.1lf升/100公里\n", ((a / b) * (Y / X)) / 100);
}