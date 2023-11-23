#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int quarters;
int regions;

void insert(double p[][quarters],int r);

double ava_each_line(double *p);

double ava_all(double p[][quarters],int r);

double max(double p[][quarters],int r);

int main(int argc, char* argv[])
{
    
    printf("请输入您要创建的数组的列数和行数（以空格隔开）：\n");
    scanf("%d %d", &quarters, &regions);
    double arr[regions][quarters];
    int m = 0;
    
    insert(arr,regions);
    printf("该数组每行的平均值为：\n");
    for (int i = 0; i < regions; i++)
    {
        double a = ava_each_line(arr[i]);
        printf("%.3lf\t", a);
    }
    printf("\n该数组中所有元素的平均值为：");
    double b = ava_all(arr,regions);
    double c = max(arr,regions);
    printf("%.3lf\n该数组中的最大元素为： %.3lf\n",b,c);
}
//初始化数组
void insert(double p[][quarters],int r)
{
    printf("请输入每行的数字：\n");
    for (int i = 0; i < r;i++){
        printf("请输入第%d行：\n",i+1);
        for (int j = 0; j < quarters;j++){
            scanf("%lf", &p[i][j]);
        }
    }
}
//每一行的平均值
double ava_each_line(double *p){
    double num = 0;
    int i = 0;
    for (i = 0; i < quarters; i++)
    {
        num += p[i];
    }
    num /= quarters;
    return num;
}
//整体的均值
double ava_all(double p[][quarters],int r){
    double num = 0;
    for (int j = 0; j < r; j++)
    {
        num += ava_each_line(p[j]);
    }
    num /= r;
    return num;
}
//最大值
double max(double p[][quarters],int r){
    int m = 0;
    double max = p[0][0];
    while (m < r)
    {
        for (int i = 0; i < quarters; i++)
            {
                if (max < p[m][i])
                    max = p[m][i];
            }
            m++;
    }
    return max;
}
