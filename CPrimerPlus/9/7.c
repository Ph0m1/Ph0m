#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int retrieval(char p);

int main(int argc, char *argv[])
{
    char ch;
    FILE *fp;
    if(argc!=2)
    {
        printf("Usage: %s filename\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if((fp=fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while((ch = getc(fp)) != EOF){
        
        printf("%d", retrieval(ch));
        fp++;
    }
}

int retrieval(char p){
    if(p<='z' && p >= 'a'){
        return (int)(p - 'a' - 1);
    }
    else if(p<='Z' && p>='A')
    {
        return (int)(p - 'A' - 1);
    }
    else
        return -1;
}