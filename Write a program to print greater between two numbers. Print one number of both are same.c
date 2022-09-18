
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter the two number \n");
    scanf(" \n %d \n %d",&x,&y);

    if(x>=y)
        printf(" \n %d",x);

    else
        if(x==y)
        printf(" \n %d",y);
    else
        printf("\n %d",y);

    return 0;
}
