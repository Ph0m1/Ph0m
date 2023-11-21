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
    ch = getc(fp);
    while (ch != EOF)
    {

        printf("%d\t", retrieval(ch));
        ch = getc(fp);
    }
    if(fclose(fp)!=0)
        printf("Error in closing file %s\n", argv[1]);
}

int retrieval(char p){
    if(p<='z' && p >= 'a'){
        return (p - 'a' - 1);
    }
    else if(p<='Z' && p>='A')
    {
        return (p - 'A' - 1);
    }
    else
        return -1;
}