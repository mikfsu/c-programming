#include<stdio.h>
void main()
 {
     int i,j, number=0;

     printf("Enter a number: ",number);
     scanf("%d \n",&i);
     int arr[10]={1,2,3,4,5,6,7,8,9,10};



        for(j=0;j<10;j++){
            printf("%d*%d=%d \n", i,arr[j],i*arr[j]);
        }



 }

