#include <stdio.h>
void main(){

int number=0;
printf("Enter a number:");
scanf("%d", &number);

switch(number){

case 10 :
    printf("number is eqal to 10");

case 50 :
    printf("number is eqal to 20");

case 100 :
    printf("number is eqal to 100");
default :
     printf("This number is equal to 10,50 and 100");

}

}
