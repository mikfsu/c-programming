#include<stdio.h>
int even_odd(int);
void main()
{
    int n, number=0;
    printf("To check a number whether it is even or odd \n Enter a number:");
    scanf("%d", &n);
    number =even_odd(n);

  if(number==0)
  {
    printf("The number is even number");
  }
  else
  {
      printf("The number is odd number");

  }
}
int even_odd(int n)
{
    if(n%2==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
