#include<stdio.h>
void main(){
int n;
printf("Enter a number:");
scanf("%d",&n);

int r,c,s;
{
    for(r=1;r<=n;r++)
    {
        for(c=n-r;c>=1;c--)
        {
            printf(" ");
        }

        for(s=1;s<=2*r-1;s++)
        {
            printf("*");
        }
        printf("\n");



    }

    for(r=n-1;r>=1;r--)
    {
        for(c=1;c<=n-r;c++)
        {
            printf(" ",c);
        }

        for(s=1;s<=2*r-1;s++)
        {
            printf("*");
        }
        printf("\n");



    }
}
}
