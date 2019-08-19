#include<stdio.h>
void main(){
int n;
printf("Enter a year:");
scanf("%d",&n);

    if(n%400==0){
        printf("is leap year",n);
    }

    else if(n%100==0){
        printf("is leap year",n);
    }
    else if (n%4==0){
        printf("is leap year",n);
    }
    else {
        printf("is not a leap year",n);
    }
}
