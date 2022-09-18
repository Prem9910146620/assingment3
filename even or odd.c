#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf(" \n %d",&x);
    if(x%2==0)
        printf("even");
    else
        printf("odd");
    return 0;
}
