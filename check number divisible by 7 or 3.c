#include<stdio.h>
int main()
{
    int x;
    printf("enter the number ");
    scanf("%d",&x);

    if(x%7==0)
        printf(" \n divisible by 7");
    if(x%3==0)
        printf(" \n divisible by 3");
else
    printf ("no divisible");

    return 0;
}
