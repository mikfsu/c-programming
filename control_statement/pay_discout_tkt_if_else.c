#include <stdio.h>
int main()
{
    int n=0;
    printf("Enter age:");
    scanf("%d",&n);

        if(n>=0 && n<16)
        {
          printf("kinder(children), keine Gebuehren(no fees)");
        }
        else if(n>=16 && n<=60)
        {
          printf("Junge leute (young people),Vollstaendige Zahlung(Full payment)");
        }
        else if(n>60)
        {
            printf("alte Leute (old people),zum halben price(half price)");
        }
        else
        {
            printf("invalid");
        }



    return 0;
}
