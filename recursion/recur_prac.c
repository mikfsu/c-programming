#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d",fun (n));
}
int fun(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return 7+fun(n-2);
    }
}
