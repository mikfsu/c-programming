#include<stdio.h>
void main(){
int i, number=0;
printf("Enter a number :");
scanf("%d", &number);

for(i=1;i<=10;i++){
    printf("%d \n", number*i);
}

}
