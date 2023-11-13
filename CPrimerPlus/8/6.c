#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

char get_first(void);

int main(int argc, char* argv[])
{
    char c;
    c = get_first();
    printf("%c", c);
}

char get_first(void){
    int ch;
    do ch = getchar();
    while (isspace(ch));
    return ch;
}

