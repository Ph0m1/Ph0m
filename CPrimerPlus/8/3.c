#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char* argv[])
{
    int up = 0;
    int low = 0;
    char ch;
    do{
        ch = getchar();
        if (ch <= 'z' && ch >= 'a')
            low++;
        if(ch <= 'Z' && ch >= 'A')
            up++;
    } while (ch != EOF);
    printf("大写字母%d个，小写字母%d个\n", up, low);
}