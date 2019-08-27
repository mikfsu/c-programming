#include<stdio.h>
int main()
{
    int i=2,j=3;
    while(i<=20,j<=30)
    {
        i+=2;
        j+=3;
        if(i%3==0)
        {
            continue;
        }
         else if(j%4==0)
        {
            continue;
        }
        printf("%d\t%d\t\n",i,j);




    }
    return 0;
}
