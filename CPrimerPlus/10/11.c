#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void print_arr(int p[][5], int n);

void double_arr(int p[][5], int n);

int main(int argc, char *argv[])
{
    int arr[3][5] = {{6, 3, 1, 3, 1}, {6, 8, 1, 2, 3}, {7, 1, 4, 5, 1}};
    print_arr(arr, 3);
    double_arr(arr, 3);
    print_arr(arr, 3);
}

void print_arr(int p[][5], int n){
    for (int i = 0; i < n;i++){
        for (int j = 0; j < 5;j++){
            printf("%d\t", p[i][j]);
        }
        printf("\n");
    }
}

void double_arr(int p[][5], int n){
    for (int i = 0; i < n;i++){
        for (int j = 0; j < 5;j++){
            p[i][j] *= 2;
        }
    }
}