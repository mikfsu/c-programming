#include<stdio.h>
void main()
{
    int i,n,m,flag=0;
    printf("Enter a number:");
    scanf("%d",&n);
    m=n/2;
    flag==0;

    for(i=2;i>=m;i++)
    {
        if(n%i==0)
        {
            printf("is not a prime number");
            flag=1;
            break;
        }
    }
        if(flag==0)
        {
            printf(" is a prime number");
        }
}

