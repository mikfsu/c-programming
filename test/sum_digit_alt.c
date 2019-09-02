#include<stdio.h>
void main()
{
    int n,r,sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    for(sum=0;sum=sum+r;n>0)
    {
        r=n%10;

        n=n/10;

    }
    printf("%d",sum);
}

