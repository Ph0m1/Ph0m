#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int ch1;
    int ch2;
    FILE *fp1;
    FILE *fp2;
    
    if ((fp1 = fopen(argv[1], "r")) == NULL || (fp2 = fopen(argv[2], "r")) == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    while ((ch1 = getc(fp1)) && (ch2 = getc(fp2)))
    {
        if (ch1 != EOF)
        {
            printf("%s:\n", argv[1]);
            do
            {
                putchar(ch1);
                ch1 = getc(fp1);
            } while (ch1 != '\n');
            putchar(ch1);
        }
        else {if(ch2==EOF)
                break;
        }
        if (ch2 != EOF)
        {
            printf("%s:\n", argv[2]);
            do
            {
                putchar(ch2);
                ch2 = getc(fp2);
            } while (ch2 != '\n');
            putchar(ch2);
        }
        else {if(ch1==EOF)
                break;
        }
    }

    if (fclose(fp1) == 0 && fclose(fp2) == 0)
        ;
    else
    {
        perror("Error closing file");
        exit(EXIT_FAILURE);
    }

    return 0;
}
