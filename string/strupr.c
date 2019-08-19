#include<stdio.h>
#include<string.h>
int main(){
char c[15];
printf("Writhing something:");
gets(c);

printf("Enter a word: %s",c);
printf("uper case: %s", strupr(c));

return 0;
}
