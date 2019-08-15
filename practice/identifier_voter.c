#include<stdio.h>
void main(){
    int age=0;
printf("Enter age");
scanf("%d",&age);

if (age>=18){
    printf("%d aged people can give a vote",age);
}
else {
    printf("%d aged people can not give a vote",age);
}

}
