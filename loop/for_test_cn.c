#include<stdio.h>
int main(){
int i,j;
{
    for(i=2,j=3;i<=20,j<=30;i+=2,j+=3)
    {
        if(i%3 != 0) {
            printf("i = %d\n",i);
        }
        if (j%4 != 0) {
            printf("j = %d\n", j);
        }

    }

}
return 0;
}
