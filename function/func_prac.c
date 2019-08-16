#include<stdio.h>
float square();
void main()
{
    printf("Caculate the area of the square \n");
    float area= square();
    printf("Area of the square %f \n", area);
}

float square()
{
    float side;
    printf("Enter the length in meters :");
    scanf("%f",&side);
    return side*side;
}

