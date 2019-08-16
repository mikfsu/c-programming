#include<stdio.h>

void main()
{
int result;
printf("Sum of two numbers :");
result = sum();
printf("%d \n",result);

printf("Subtract of two numbers :");
result = sub();
printf("%d \n",result);

printf("multiplication :");
result = multiply();
printf("%d", result);
}

int sum()
{
int a,b;
printf("Enter two number:");
scanf("%d %d", &a,&b);
return(a+b);
}

int sub()
{
    int x,y;
    printf("Type two number:");
    scanf("%d %d", &x,&y);
    return(x-y);
}

int multiply()
{
    int x,y;
    printf("Type two number:");
    scanf("%d %d", &x,&y);
    return(x*y);
}
