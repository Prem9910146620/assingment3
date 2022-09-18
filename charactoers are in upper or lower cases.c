#include<stdio.h>
int main()
{
    char x;
    printf("enter a alphabet ");
    scanf(" \n %c",&x);

    if(x>='A'&&x<='Z')
        printf(" upper");
    else
        printf("lower");
    return 0;
}
