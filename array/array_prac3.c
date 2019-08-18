#include<stdio.h>
void main(){
int i, n=0;
int marks[n];
printf("Enter a amount of value :");
scanf("%d",&n);

printf("Enter number");
for(i=0;i<n;i++){
    printf("Enter value: %d \n",i);
    scanf("%d",&marks[i]);
}
printf("Output :");
for (i=0;i<n;i++){
    printf("%d \n",marks[i]);
}

}
