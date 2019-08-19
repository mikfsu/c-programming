#include<stdio.h>
#include<string.h>
int main(){

char c[15],s[15];
printf("first word:");
gets(c);

printf("second word:");
gets(s);

if(strcmp(c,s)==0){
    printf("equal");
}
else{
    printf("is not equal");
}
return 0;
}
