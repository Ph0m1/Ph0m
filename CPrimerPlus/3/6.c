#include <stdio.h>

int main()
{
    double a;
    printf("请输入水的夸脱数：");
    scanf("%lf", &a);
    printf("水分子的数量：%e\n", a * 950.0 / (3E-23));
    return 0;
}
