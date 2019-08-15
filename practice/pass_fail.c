#include<stdio.h>
void main(){
int marks;
printf("Enter your marks");
scanf("%d",&marks);

if(marks>=80 && marks<=100){
    printf("%d is excellent score",marks);
}
else if (marks>=60 && marks<=79){
    printf("%d is good score",marks);
}
else if (marks>=40 && marks<=59){
    printf("%d is pass marks but not good",marks);
}
else {
    printf("%d is fail marks",marks);
}



}
