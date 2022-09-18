
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf(" \n %d",&x);
    if(x%5==0)
        printf("divisible");
    else
        printf("not divisible");
    return 0;
}
