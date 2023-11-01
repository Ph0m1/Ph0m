#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void func(int (*arr)[13])
{
    for(int i=0;i<10;i++)//用i代表行
    {
        for(int j=0;j<13;j++)//用j代表列;
        {
            printf("%d\t",arr[i][j]);
        }//逐个输出本行元素
        printf("\n");//输出完当前行后换行
    }
}

int main(void) {
    int arr[10][13];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 13; j++) {
            arr[i][j] = rand();
        }
    }
    func(arr);
}