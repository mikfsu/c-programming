#include<stdio.h>
void main(){
    int i,number=0;
    int marks[5];

    printf("Enter 5 number:");
    for(i=0;i<5;i++){
        printf("Enter %d number: \n",i);
        scanf("%d",&marks[i]);
    }

    printf("Print array input value: \n");
    for(int i=0; i<5; i++) {

        printf("%d\n", marks[i]);
    }


}
