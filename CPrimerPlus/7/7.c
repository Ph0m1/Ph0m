#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define GAIN 10.00

int main(int argc, char* argv[])
{
    double hours;
    printf("请输入一周工作的小时数:\n");
    scanf("%lf", &hours);
    if(hours>40)
        hours *= 1.5;
    double total = GAIN * hours;
    double tax;
    if (total>300)
    {if(total-300>150)
            tax = 300 * 0.15 + 150 * 0.20 + (total - 450) * 0.25;
     else
         tax = 300 * 0.15 + (total - 300) * 0.20;
    }
    else
        tax = total * 0.15;
    printf("工资总额：%.2lf\n税金：%.2lf\n净收入：%.2lf\n", total, tax, total - tax);
}