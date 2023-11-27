#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define CSIZE 4
#define LEN 15
#define SCORES 3

typedef struct name
{
    char firstname[LEN];
    char lastname[LEN];
} name;

typedef struct student
{
    name names;
    double grade[SCORES];
    double aver;
} student;

void InsertScores(student arr[], int n); // d
void Average(student arr[], int n);      // e
void PrintStruct(student arr[], int n);  //f


int main(int argc, char* argv[])
{
    student classes[CSIZE] = {
        {"Xiao", "Zhang"},
        {"Xiao", "Ming"},
        {"Xiao", "Li"},
        {"Xiao", "Gang"}};
    InsertScores(classes, CSIZE);
    Average(classes, CSIZE);
    PrintStruct(classes, CSIZE);

}

void InsertScores(student arr[], int n){
    for (int i = 0; i < n;i++){
        printf("请输入 %s %s 的三项成绩:", arr[i].names.firstname, arr[i].names.lastname);
        for (int j = 0; j < SCORES;j++){
            while(scanf("%lf",&arr[i].grade[j])!=1){
                while(getchar()!='\n')
                    continue;
                printf("请输入一个数字!: ");
            }
        }
    }
}   
void Average(student arr[], int n){
    
    for (int i = 0; i < n; i++){
        int sum=0;
        for (int j = 0; j < SCORES;j++){
            sum += arr[i].grade[j];
        }
        arr[i].aver = sum / SCORES;
    }
}    
void PrintStruct(student arr[], int n){
    for (int i = 0; i < n;i++){
        printf("%s %s\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", arr[i].names.firstname, arr[i].names.lastname, arr[i].grade[0], arr[i].grade[1], arr[i].grade[2], arr[i].aver);
    }
}

