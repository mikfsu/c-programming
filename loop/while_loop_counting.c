#include<stdio.h>
void main(){

int i=1, number=0;
printf("Enter a number :");
scanf("%d",&number);

while(i<=10){
    printf("%d \n",i*number);
    i++;
}

}
