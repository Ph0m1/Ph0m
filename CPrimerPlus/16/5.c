#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

void pr_mem(int ar[], int size, int n);

int main(int argc,char *argv[]){
    int ar[8];
    memset(ar, rand(),8);
    pr_mem(ar, 8, 3);
}

void pr_mem(int ar[], int size, int n){
    int ar1[2][size];
    for (int i = 0; i < size;i++){
        ar1[0][i] = ar[i];
    }
        memset(ar1[1], 0, 8);
    time_t t;
    srand((unsigned)time(&t));
    int count = 0;
    while(count<n){
        int t = rand()%size;
        if(ar1[1][t]==-1) continue;
        {
            printf("%d\t", ar1[0][t]);
            ar1[1][t] = -1;
            count++;
        }
    }
}