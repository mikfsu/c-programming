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
            printf(" ",c);
        }

        for(s=1;s<=r;s++)
        {
            printf("* ");
        }
        printf("\n");



    }
}
}
