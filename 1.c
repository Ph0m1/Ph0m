#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    printf("[%d]\n", argc);
    while (argc) {
      ++argc;
    }
    int i = -1, j = argc, k = 1;
    i++ && j++ || k++;
    printf("i = %d, j = %d, k = %d\n", i, j, k);
    return EXIT_SUCCESS;
}

// typedef int (*Predicate)(int);
// int *filter(int *array, int length, Predicate predicate,
//             int *resultLength) {
//     // 为结果数组分配内存
//     int *result = malloc(length * sizeof(int));
//     // 检查分配是否成功
//     if (result == NULL) {
//         // 返回NULL并将resultLength设为0
//         *resultLength = 0;
//         return NULL;
//     }
//     // 初始化结果索引
//     int index = 0;
//     // 遍历输入数组
//     for (int i = 0; i < length; i++) {
//         // 获取当前元素
//         int element = array[i];
//         // 检查它是否满足谓词
//         if (predicate(element)) {
//             // 将它添加到结果数组
//             result[index] = element;
//             // 增加结果索引
//             index++;
//         }
//     }
//     // 设置结果长度
//     *resultLength = index;
//     // 返回结果数组
//     return result;
// }
// int isPositive(int num) { return num > 0; }
// int main(void) {
//     int array[] = {-3, -2, -1, 0, 1, 2, 3, 4, 5, 6};
//     int length = sizeof(array) / sizeof(array[0]);
//     int resultLength;
//     int *filteredNumbers = filter(array, length, isPositive,
//                                  &resultLength);
//     for (int i = 0; i < resultLength; i++) {
//       printf("%d ", filteredNumbers[i]);
//     }
//     printf("\n");
//     free(filteredNumbers);
//     return 0;
// }

// int func(int a, int b) {
//     if (!a) return b;
//     return func((a & b) << 1, a ^ b);
// }
// int main(void) {
//     int a = 4, b = 9, c = -7;
//     printf("%d\n", func(a, func(b, c)));
// }

// int main(void) {
//     char arr[] = {'L', 'i', 'n', 'u', 'x', '\0', '!'}, str[20];
//     short num = 520;
//     int num2 = 1314;
//     printf("%zu\t%zu\t%zu\n", sizeof(*&arr), sizeof(arr + 0),
//          sizeof(num = num2 + 4));
//     printf("%d\n", sprintf(str, "0x%x", num) == num);
//     printf("%zu\t%zu\n", strlen(&str[0] + 1), strlen(arr + 0));
// }

// char *welcome() {
//     // 请你返回自己的姓名
//     static char* p="XXX";
//     //return "XXX";//
//     return p;
// }
// int main(void) {
//     char *a = welcome();
//     printf("Hi, 我相信 %s 可以面试成功!\n", a);
//     return 0;
// }

// #define SWAP(a, b, t) t = a; a = b; b = t
// #define SQUARE(a) a *a
// #define SWAPWHEN(a, b, t, cond) if (cond) SWAP(a, b, t)
// int main() {
//     int tmp;
//     int x = 1;
//     int y = 2;
//     int z = 3;
//     int w = 3;
//     SWAP(x, y, tmp);//调换x y的值
//     printf("x = %d, y = %d, tmp = %d\n", x, y, tmp);
//     if (x>y) SWAP(x, y, tmp);//x>y成立，再次调换x y
//     printf("x = %d, y = %d, tmp = %d\n", x, y, tmp);
//     SWAPWHEN(x, y, tmp, SQUARE(1 + 2 + z++ + ++w) == 100);//SQUARE()=20,返回0；不调换
//     printf("x = %d, y = %d\n", x, y, tmp);
//     printf("z = %d, w = %d, tmp = %d\n", z, w, tmp);//z w都分别自增了两次
// }

// int main(int argc, char **argv) {
//     int data1[2][3] = {{0x636c6557, 0x20656d6f, 0x58206f74},
//                        {0x756f7969, 0x6e694c20, 0x00000000}};
//     int data2[] = {0x47207875, 0x70756f72, 0x32303220, 0x00000a32};
//     char *a = (char *)data1;
//     char *b = (char *)data2;
//     char buf[1024];
//     strcpy(buf, a);
//     strcat(buf, b);
//     printf("%s \n", buf);
// }

// #include <stdio.h>
// int main(int argc, char **argv) {
//     printf("argc = %d\n", argc);
//     while (1) {
//         argc++;
//         if (argc < 0) {
//             printf("%s\n", (char *)argv[0]);
//             break;
//         }
//     }
// }

// int main(int argc, char **argv) {
//     int arr[5][5];
//     int a = 0;
//     for (int i = 0; i < 5; i++) {
//         int *temp = *(arr + i);
//         for (; temp < arr[5]; temp++) *temp = a++;
//     }
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 5; j++) {
//             printf("%d\t", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// char* convertAndMerge(char words[][20]) {
//     // 计算链接后字符串的长度
//     int len = 0;
//     for (int i = 0;i<2; i++) {
//         len += strlen(words[i]);
//     }
//     // 申请一个新的字符串来接收拼接后的字符串
//     char *str = (char*)malloc(len + 1);
//     if (str == NULL) {
//         return NULL;
//     }    
//     int pos = 0;
//     for (int i = 0; i <2; i++) {
//         strcpy(str + pos, words[i]);
//         pos += strlen(words[i]);
//     }
//     //大小写转换
//    for(int i=0;i<strlen(str);i++){
//     if(str[i]<='z'&&str[i]>='a') str[i]-=32;
//     else if(str[i]<='Z'&&str[i]>='A') str[i]+=32;
//    }
//    str[strlen(str)]='\0';
//     return str;
// }
// int main(void) {
//     char words[2][20] = {"Welcome to Xiyou ", "Linux Group 2022"};
//     printf("%s\n", words[0]);
//     printf("%s\n", words[1]);
//     char *str = convertAndMerge(words);
//     printf("str = %s\n", str);
//     free(str);
// }

// int main(void) {
//     unsigned char a = 4 | 7;
//     a <<= 3;
//     unsigned char b = 5 & 7;
//     b >>= 3;
//     unsigned char c = 6 ^ 7;
//     c = ~c;
//     unsigned short d = (a ^ c) << 3;
//     signed char e = -63;
//     e <<= 2;
//     printf("a: %d, b: %d, c: %d, d: %d\n", a, b, c, (char)d);
//     printf("e: %#x\n", e);
// }

// int main(void) {
//     char p0[] = "Hello,Linux";
//     char *p1 = "Hello,Linux";
//     char p2[11] = "Hello,Linux";
//     printf("p0 == p1: %d, strcmp(p0, p2): %d\n", p0 == p1, strcmp(p0, p2));
//     printf("sizeof(p0): %zu, sizeof(p1): %zu, sizeof(*p2): %zu\n",
//            sizeof(p0), sizeof(p1), sizeof(*p2));
//     printf("strlen(p0): %zu, strlen(p1): %zu\n", strlen(p0), strlen(p1));
//     printf("%d",'\0');
// }

// int main()
// {
//     printf("%.0f",10000*log10(2));
// }

// void func(int n,int *a)//n为指数
// {
//     for(int j=n;j!=1;j--)
//     for(int i =0;a[i]>=0;i++)//每一位乘以2
//     {
//         a[i]*=2;
//         if(a[i]>=10)
//         { a[i]%=10;
//             if(a[i+1]==-1) a[i+1]=a[i]/10;
//             else a[i+1]+=a[i]/10;
//         }
//         else {
//             if(a[i+1]==-1) a[i+1]=0;   
//         }
//     }
//     int p;
//    for(int i=0;a[i]!=-1;i++) p=i;
//    printf("%d",p);
// }
// int main(){
//     int a[10000];
//     for(int i=0;i<10000;i++) a[i]=-1;//-1表示空位
//     a[0]=1;
// 	func(10000,a);
// }

// int main(void) {
//     int data[] = {0x636c6557, 0x20656d6f, 0x78206f74,
//                   0x756f7969, 0x6e694c20, 0x67207875,
//                   0x70756f72, 0x32303220, 0x00000a31};
//     puts((const char*)data);
// }

// int *func1(void) {
//     static int n = 0;
//     n = 1;
//     return &n;
// }
// int *func2(void) {
//     int *p = (int *)malloc(sizeof(int));
//     *p = 3;
//     return p;
// }
// int *func3(void) {
//     int n = 4;
//     return &n;
// }
// int main(void) {
//     *func1() = 4;
//     *func2() = 5;
//     *func3() = 6;
// }
// void Swap3(int a, int b) {
//     int t = a;
//     a = b;
//     b = t;
// }
// void Swap4(int *p,int *q)
// {
//     *p=*p+*q;
//     *q=*p-*q;
//     *p=*p-*q;
// }
// int main(){
//     int a=9,b=0;
//     Swap4(&a,&b);
//     printf("%d %d",a,b);
// }

// int main(int argc, char *argv[]) {
//     printf("argc = %d\n", argc);
//     for (int i = 0;argv[i]!=NULL; i++)
//         printf("%s\n", argv[i]);
    // for (int i = 0;i<argc; i++)
    //     printf("%s\n", argv[i]);
    // }
