#include<stdio.h>
void main(){
int ,marks;
printf("Enter marks:");
scanf("%d",&marks);

if(marks>=80 && marks<=100){
    printf("A+",marks);
}

else if(marks>=70 && marks<=79){
    printf("A",marks);
}
else if(marks>=65 && marks<=69){
    printf("A-",marks);
}
else if(marks>=60 && marks<=64){
    printf("B",marks);
}
else if(marks>=50 && marks<=59){
    printf("C",marks);
}
else if(marks>=40 && marks<=49){
    printf("D",marks);
}
else if(marks>=0 && marks<=39){
    printf("F",marks);
}
else {
    printf("invaild marks",marks);
}
}
