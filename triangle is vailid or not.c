#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three value \n");
    scanf("\n %d \n %d \n %d",&a,&b,&c);


   if( a<b+c&&b<a+c&&c<a+b)

       printf("valid");

    else
        printf("not");

    return 0;


}
