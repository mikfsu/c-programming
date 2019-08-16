#include<stdio.h>
void average(int,int,int,int);
void main()
{
    int a,b,c,d;
    printf("Enter some number \n");
    scanf("%d%d%d%d", &a,&b,&c,&d);
    average(a,b,c,d);
}
void average(int a, int b, int c, int d)
{
    float avg= (float) (a+b+c+d)/4;
    printf("The average is %f", avg);
}
