#include<stdio.h>
void main(){
int i=1,j=1;

for(i=1;i<=3;i++){
    for (j=1;j<=3;j++){
            if(i==2 &&j==3){
                continue;
            }
            printf("%d %d \n",i,j);
}

}

}
