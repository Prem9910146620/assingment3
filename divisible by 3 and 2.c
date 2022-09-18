#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf(" \n %d",&x);
    if(x%6==0)
        printf("divisible");
    else
        printf("non divisible");
    return 0;
}
