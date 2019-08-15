#include<stdio.h>
void main(){
int x,y,z;
scanf("%d %d %d", &x,&y,&z);

if(x>y && x>z){
    printf("%d is the the largest number", x);
}
else if(y>x && y>z){
    printf("%d is the largest number", y);
}

else if(z>y && z>x){
    printf("%d is the largest number", z);
}
else {
    printf("%d %d %d all are equal", x, y, z);
}
}
