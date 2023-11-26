#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int n;

void readstrs(char *p);

int main(int argc, char* argv[])
{
 
    printf("请输入你想读取的字符数:\n");
    scanf("%d", &n);
    getchar();
    char str[n+1];
    readstrs(str);
    printf("%s\n", str);
    return 0;
}

void readstrs(char *p){
    for (int i = 0; i < n;i++){
        p[i] = getchar();
        if(p[i]=='\n'||p[i]=='\t'||p[i]==' '||p[i]=='\r')
            break;
    }
}
