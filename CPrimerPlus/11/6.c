#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int is_within(char n, char *p);

int main(int argc, char* argv[])
{
    char str[] = "asgfbwiyuaregfaesufujef";
    if(is_within('a', str))
        printf("Y");
        else
            printf("N");
}

int is_within(char n, char *p){
    for (int i = 0; i < strlen(p);i++){
        if(n==p[i])
            return 1;
    }
    return 0;
}