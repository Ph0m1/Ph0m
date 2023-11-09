#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char* argv[])
{
    int count = 0;
    double money = 100;
    double moneyout = 10;
    while(money)
    {
        count++;
        money += money * 0.08;
        if (money <= 10)
            break;
        money -= moneyout;
    }
    printf("Chuckie %d 年后会取完有钱\n", count);
}