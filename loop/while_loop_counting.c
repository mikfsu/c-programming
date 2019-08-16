#include<stdio.h>
void main(){

int i=1, number=0;
printf("Enter a number :");
scanf("%d",&number);

while(i<=10){
        if(i==5){
            continue;
        }
    printf("%d \n",i);
    i++;
}

}
