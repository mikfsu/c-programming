#include<stdio.h>
int sum();
int sub();
int mult();
int div();
void main()
{
    int result;
    printf("1 for Sum, 2 for Sub, 3 for mult, 4 for div\n");
    printf("Enter a number: ");
    scanf("%d", &result);

    switch(result)
    {
        case 1:
            sum();
            break;
        case 2:
            sub();
            break;
        case 3:
            mult();
        case 4:
            div();
        default:
            printf("No Operation");
            break;
    }
}
int sum()
{
    int a,b, result = 0;
    printf("Enter two number:");
    scanf("%d %d", &a,&b);
    result = a+b;
    printf("Sum of two numbers: %d", result);
}
int sub()
{
    int x,y, result = 0;
    printf("Type two number:");
    scanf("%d %d", &x,&y);
    result = x - y;
    printf("Sub of two numbers: %d", result);
}
int mult()
{
    int a,b, result = 0;
    printf("Enter two number:");
    scanf("%d %d", &a,&b);
    result = a*b;
    printf("multiply of two number: %d", result);
}
int div()
{
    int a,b, result = 0;
    printf("Enter two number:");
    scanf("%d %d", &a,&b);
    result= a/b;
    printf("divide two number: %d", result);
}


