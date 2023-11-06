#include<stdio.h>

int main()
{
    static int a;
    printf("请输入杯数：");
    scanf("%d", &a);
    int b = a;
    printf("%d杯水等于：\n%d茶勺\n%d大汤勺\n%d盎司\n%d品脱\n", b, a *= 2, a *= 8, a *= 2, a *= 3);
    return 0;
}