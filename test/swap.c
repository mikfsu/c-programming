#include<stdio.h>
void main ()
{
    int p,a=20,b=30;
    printf("a=%d b=%d",a,b);

    p=a+b;
    a=p-a;
    b=p-b;

    printf("\na=%d b=%d",a,b);
}
