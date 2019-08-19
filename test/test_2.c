#include<stdio.h>
void main(){
int i=1, sum=0,odd=0;

for(i=1;i<=100;i++){
    if(i%2==0){
        sum=sum+i;

    }
    else{
        odd=odd+i;
    }
}
printf("%d \n%d",sum,odd);




}
