#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

 int main(void)
 {
     float speed;
     float p;
     printf("请输入下载速度（Mb/s）和文件大小（MB）：");
     scanf("%f%f", &speed, &p);
     printf("At %.2f mrgabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.", speed, p, p * 8 / speed);
 }
