#include<stdio.h>
int fact (int n);
int main ()
{
    int n,result;
    printf("Enter a number:");
    scanf("%d", &n);
    result=fact(n);
    printf("factorial= %d", result);

}
int fact(int n)
{
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
