#include<stdio.h>
int main()
{
    int x;
    printf("enter a number= ");
    scanf("%d",&x);
    if(x%2>0)
        printf("positive");
    else
        if(x%2<0)
        printf("negetive");
    else
        printf("zero");

    return 0;

}
