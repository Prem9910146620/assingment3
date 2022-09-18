#include<stdio.h>
int main()
{
    int x,c=0;
    printf("enter the number = ");
    scanf(" \n %d",&x);
    while(x/1>0)
    {
        c++;
         x=x/10;
         }
    if( c==3)

        printf(" three digit");
    else
        printf("not three digit");
    return 0;
}
