#include<stdio.h>
void main()
{
    int i;
    int marks[5];
    printf("Enter marks:");
    for(i=0;i<5;i++){
        printf("Subject %d Number ",i);
        scanf("%d",&marks[i]);
    }
     for (i=0;i<5;i++){

       switch(i) {
           case 0:
            printf("Enter 1st subject: ");
            break;
           case 1:
            printf("Enter 2nd subject: ");
            break;
           case 2:
            printf("Enter 3rd subject: ");
            break;
           case 3:
            printf("Enter 4th subject: ");
            break;
           case 4:
            printf("Enter 5th subject: ");
            break;
       }

        if(marks[i]>=80 && marks[i]<=100){
            printf("A+ \n");
        }

        else if(marks[i]>=70 && marks[i]<=79){
            printf("A \n");
        }
        else if(marks[i]>=65 && marks[i]<=69){
            printf("A- \n");
        }
        else if(marks[i]>=60 && marks[i]<=64){
            printf("B \n");
        }
        else if(marks[i]>=50 && marks[i]<=59){
            printf("C \n");
        }
        else if(marks[i]>=40 && marks[i]<=49){
            printf("D \n");
        }
        else if(marks[i]>=0 && marks[i]<=39){
            printf("F \n");
        }
        else {
            printf("invaild marks \n");
        }
    }

}
