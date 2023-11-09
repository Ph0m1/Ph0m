#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char* argv[])
{
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 7; i >=0; i--)
    {
        printf("%d\t", arr[i]);
    }
}