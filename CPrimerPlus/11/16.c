#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char* argv[])
{
    int ch;
    int flag = 1;
    char mode = 'p';
    FILE *fp;
    if((fp=fopen(argv[1],"r"))==NULL){
        exit(EXIT_FAILURE);
    }

    if (argc > 3)
    {
        printf("Usage: %s [-p | -u | -l]\n", argv[0]);
        flag = 0;
    }
    else if (argc == 3)
    {
        if (argv[2][0] != '-')
        {
            printf("Usage: %s [-p | -u | -l]\n", argv[0]);
            flag = 0;
        }
        else
        {
            switch (argv[2][1])
            {
            case 'p':
            case 'u':
            case 'l':
            {
                mode = argv[2][1];
                break;
            }
            default:
            {
                printf("The argument isn't p, u or l, the program start to run with -p way.\n");
            }
            }
        }
    }
    if (flag)
    {
        
        while ((ch = getc(fp)) != EOF)
        {
            switch (mode)
            {
            case 'p':
            {
                putchar(ch);
                break;
            }
            case 'u':
            {
                putchar(toupper(ch));
                break;
            }
            case 'l':
            {
                putchar(tolower(ch));
                break;
            }
            }
        }
    }
    printf("Done.\n");

    return 0;
}