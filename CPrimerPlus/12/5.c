#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

void sort(int *p);

int main(int argc, char* argv[])
{
    time_t t;
    srand((unsigned) time(&t));
    int nums[100];
    for (int i = 0; i < 100;i++){
        nums[i] = (rand() % 10 + 1);
    }
    sort(nums);
    for (int i = 0; i < 100;i++){
        printf("%d\t", nums[i]);
    }
}

void sort(int *p){
    for (int i = 0; i < 100;i++){
        for (int j = i+1; j < 100;j++){
            if(p[i]<p[j]){
                int t = p[j];
                p[j] = p[i];
                p[i] = t;
            }
        }
    }
}
