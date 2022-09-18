#include<stdio.h>
int main()
{
    float a,b,profit,p,loss,l;
    printf("enter the cost price = ");
    scanf("%f",&a);
    printf(" \n enter the selling price = ");
    scanf("%f",&b);

    if(b>a)
   {
    profit= b-a;
    p=a*profit/100;

     printf("the value of profit percentage = %f",p);
   }
   if(a>b)
   {
    loss=a-b;
    l=loss*a/100;
        printf("the value of loss percentage = %f",l);
   }

    return 0;
}
