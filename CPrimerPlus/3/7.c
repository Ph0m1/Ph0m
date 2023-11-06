#include <stdio.h>

int main()
{
    double height;
    printf("请输入身高（英寸）：");
    scanf("%lf", &height);
    printf("%f厘米", height * 2.54);
    return 0;
}