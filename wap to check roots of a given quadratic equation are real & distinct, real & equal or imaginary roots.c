#include<stdio.h>
int main()

{
    int d,a,b,c;
    printf("enter the coefficient of x^2,x and constant  ");
    scanf("%d%d%d",&a,&b,&c);

    d=b*b-4*a*c;
    if(d>0)
        printf("real & distinct");
    if(d==0)
        printf("real & equal");
    if(d<0)
        printf("imaginary");

    return 0;

}
