
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the number of the month =");
    scanf("%d",&x);


         if(x%100==0)
            printf("century and leap");

         else
         if(x%4==0)
         printf(" \n non century but leap year");

        else
        printf("non leap year");


return 0;

}
