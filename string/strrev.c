#include<stdio.h>
#include<string.h>
int main(){
char c[10];
printf("Write:");
gets(c);

printf("Original word: %s",c);
printf("reverse word: %s", strrev(c));

return 0;
}
