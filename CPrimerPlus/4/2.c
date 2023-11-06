#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *p = (char *)malloc(sizeof(char));
    printf("请输入姓名：\n");
    scanf("%s", p);
    // a
    printf("\"%s\"\n",p);
    //b
    printf("\"%20s\"\n",p);
    //c
    printf("\"%-20s\"\n",p);
    //d
    printf("%*s\n",strlen(p)+3, p);
}
