#include<stdio.h>
void main()
 {
     int i,j;
     int num[5]={2,3,4,5,6};
     int arr[10]={1,2,3,4,5,6,7,8,9,10};

      for(i=0;i<5;i++){
        printf("Enter Numbers %d \n", num[i]);

        for(j=0;j<10;j++){
            printf("%d*%d=%d \n", num[i],arr[j],num[i]*arr[j]);
        }
      }


 }
