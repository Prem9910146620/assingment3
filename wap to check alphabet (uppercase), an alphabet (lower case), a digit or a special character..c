#include<stdio.h>
int main()
{
    char ch;
    printf("enter a number or alphabet or special character: ");
    scanf("\n %c",&ch);

    if(ch>='A'&&ch<='Z')
        printf(" \n upper case");
    else if(ch>='a'&&ch<='z')
        printf("lower case");

    else if(ch>='0'&&ch<='9')
        printf("digit");

    else
        printf("special character");
    return 0;
}
