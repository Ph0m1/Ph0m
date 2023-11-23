#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define COLS 5

void insert(double p[][COLS],int r);

double ava_each_line(double *p);

double ava_all(double p[][COLS],int r);

double max(double p[][COLS],int r);

int main(int argc, char* argv[])
{
    double arr[3][5];
    int m = 0;
    
    insert(arr,3);
    printf("该数组每行的平均值为：\n");
    for (int i = 0; i < 3; i++)
    {
        double a = ava_each_line(arr[i]);
        printf("%.3lf\t", a);
    }
    printf("\n该数组中所有元素的平均值为：");
    double b = ava_all(arr,3);
    double c = max(arr,3);
    printf("%.3lf\n该数组中的最大元素为： %.3lf\n",b,c);
}
//初始化数组
void insert(double p[][COLS],int r)
{
    printf("请输入三组数字(每组五个数字)\n");
    for (int i = 0; i < r;i++){
        printf("请输入第%d组数：\n",i+1);
        for (int j = 0; j < COLS;j++){
            scanf("%lf", &p[i][j]);
        }
    }
}
//每一行的平均值
double ava_each_line(double *p){
    double num = 0;
    int i = 0;
    for (i = 0; i < COLS; i++)
    {
        num += p[i];
    }
    num /= COLS;
    return num;
}
//整体的均值
double ava_all(double p[][COLS],int r){
    double num = 0;
    for (int j = 0; j < r; j++)
    {
        num += ava_each_line(p[j]);
    }
    num /= r;
    return num;
}
//最大值
double max(double p[][COLS],int r){
    int m = 0;
    double max = p[0][0];
    while (m < r)
    {
        for (int i = 0; i < COLS; i++)
            {
                if (max < p[m][i])
                    max = p[m][i];
            }
            m++;
    }
    return max;
}
