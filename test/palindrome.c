#include<stdio.h>
void main()
{
    int n,r,sum=0,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;

    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    n=temp;
    if(temp==sum)
    {
        printf("is a palindrome number");
    }
    else
    {
        printf("is not a palindrome number");
    }

}
