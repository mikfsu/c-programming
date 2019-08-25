#include<stdio.h>
int main(){
int i,j,k;
{
    for(i=2,j=3,k=4;i<=10,j<=15,k<=20;i+=2)
    {
        printf("%d\t%d\t%d\t\n",i*i,j*j,k*k);
        j+=3;
        k+=4;
    }
}
return 0;
}
