#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *convert(const char *s){
    char *p=(char*)calloc(50,sizeof(char));
   for(int i=0;i<strlen(s);i++){
    if(s[i]<='z'&&s[i]>='a') p[i]=s[i]-32;
    else if(s[i]<='Z'&&s[i]>='A') p[i]=s[i]+32;
    else p[i]=s[i];
   }
   p[strlen(s)]='\0';
   return p;
}
int main(void) {
    char *str = "XiyouLinux Group 2022";
    char *temp = convert(str);
    puts(temp);
}
