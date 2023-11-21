#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

copy_arr(double *arr1, double*arr2, int n);
copy_ptr(double *arr1, double *arr2, int n);
copy_ptrs(double*)

int main(int argc, char* argv[])
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source+5);
}