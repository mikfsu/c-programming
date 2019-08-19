#include<stdio.h>
#include<string.h>
void main(){
char c[250]="Master of Science in Economics,";
char c1[30]="Friedrich University Jena";
strcat(c,c1);
printf("Write your subject and University: %s",c);
}
