#include<stdio.h>
#include <math.h>
void main()
{
    int i,n,v,v1,number=0;
    printf("Enter a value:");
    scanf("%d",&n);

    v=n;
    v1=ceil(sqrt(n));

    for(i=2;i<=v1;i++)
    {
        if(v%1==0)
            number=1;
    }
    if ((number==0&& v!=1)||v==2||v==3)

            printf("%d is a prime number",v);

        else
            printf("%d is not a prime number",v);



}
