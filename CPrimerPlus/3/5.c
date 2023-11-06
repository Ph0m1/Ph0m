#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// 5
#define D 3.156E+7

int main(void)
{
    long long int age;
    printf("请输入您的年龄：");
    scanf("%lld", &age);
    printf("%您已度过.0lf秒", age * D);
    return 0;
}
