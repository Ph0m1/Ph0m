#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void arr_func(int *p1, int *p2, int *p3,int n);

void print_arr(int *p);

int main(int argc, char* argv[])
{
    int nums1[] = {1, 2, 3, 415, 76546, 341, 41, 41,9};
    int nums2[]={8, 8, 7, 6, 5, 4, 3, 5, 26};
    int *nums3 = (int *)malloc(9 * sizeof(int));
    arr_func(nums1, nums2, nums3, 9);
    print_arr(nums3);
    free(nums3);
    return 0;
}

void arr_func(int *p1, int *p2, int *p3,int n){
    for (int i = 0; i < n; i++){
        p3[i] = p1[i] + p2[i];
    }
}

void print_arr(int *p){
    for (int i = 0; i < 9;i++)
    {
        printf("%d\t", p[i]);
    }
}