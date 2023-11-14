#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void print(char ch, int x, int y);

int main(int argc, char* argv[])
{
    char c;
    int x;
    int y;
    printf("请输入要打印的字符：");
    scanf("%c", &c);
    printf("请输入要打印的列数：");
    scanf("%d", &x);
    printf("请输入要打印的行数：");
    scanf("%d", &y);
    print(c, x, y);
}

void print(char ch, int x, int y){
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}