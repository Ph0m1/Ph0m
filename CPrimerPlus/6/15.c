#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void swap(char *p)
{
    char *l=p;
    char *r = p + strlen(p) - 1;
    while (l<r)
    {
        char t = *l;
        *l = *r;
        *r = t;
        l++;
        r--;
    }
}

int main(int argc, char* argv[])
{
    char arr[256];
    printf("请输入一串字符:\n");
    scanf("%s", arr);
    swap(arr);
    puts(arr);
}