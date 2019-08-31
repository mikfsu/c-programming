#include<stdio.h>
void main()
{
    int n=1;
    int odd();

}
int odd(int n)
{
    if(n<=10)
    {
        printf("%d",n+1);
        n++;
        even();
    }
    return;
}
int even(int n)
{
    if(n<=10)
    {
        printf("%d",n-1);
        n++;

        odd();
    }
    return;
}
