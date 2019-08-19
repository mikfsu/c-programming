#include<stdio.h>
#include<string.h>
void main(){

char c[20];
printf("Enter a name:");
gets(c);

printf("Original word: %s",c);
printf("lower case: %s",strlwr(c));


}
