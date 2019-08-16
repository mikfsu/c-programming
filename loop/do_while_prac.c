#include<stdio.h>
void main(){
int i=1,number;

printf("Enter a number:");
scanf("%d",&number);
do{
    printf("%d \n",i*number);
    i++;
}
while(i<=10);
}
