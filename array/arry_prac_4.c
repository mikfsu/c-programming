#include <stdio.h>
void main()
    {
        int i;
        char name[5][100];
        printf("Enter name:");

        for(i=0;i<5;i++)
        {
            printf("Enter %d name ",i);
            scanf("%s",&name[i]);
        }

        for(i=0;i<5;i++)
        {
            printf("Enter %d name is: %s\n",i, name[i]);
        }
    }
