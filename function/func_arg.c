#include<stdio.h>
void sum(int,int);
void main()
{
  int a,b,result;
  printf("Enter two number:");
  scanf("%d %d",&a,&b);
  sum(a,b);
}
void sum(int a, int b)
{
    printf("The sum is %d", a+b);
}
