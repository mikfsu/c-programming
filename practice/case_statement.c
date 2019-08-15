#include<stdio.h>
void main(){
 int number=0;
 printf("Enter a number :");
 scanf("%d",&number);

 switch(number){
 case 10:
     printf("number is equal to 10");
     break;
case 20:
     printf("number is equal to 20");
     break;
case 100:
    printf("number is equal to 100");
    break;
default:
    printf("number is not equal the above numbers ");


 }


}
