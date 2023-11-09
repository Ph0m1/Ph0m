#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char* argv[])
{
    FILE *p;
    if((p=fopen (argv[1],"r"))==NULL)
    {
        exit(EXIT_FAILURE);
    }
    FILE *q;
    if((q=fopen (argv[2],"w"))==NULL)
    {
        exit(EXIT_FAILURE);
    }
    char c;
    while ((c=getc(p))!=EOF)
    {
        putc(c,q);
    }
    if(fclose(p)!= 0||fclose(q)!=0)
    {
        exit(EXIT_SUCCESS);
    }
}