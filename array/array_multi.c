#include<stdio.h>
void main()
{
    int i,j;
    int arr[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter value [%d] [%d]",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Write elements : \n");
    for(i=0;i<3;i++){
        printf("\n");

        for(j=0;j<3;j++){
            printf("%d\t", arr[i][j]);
        }
    }
}
