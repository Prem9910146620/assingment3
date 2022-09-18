#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,g;
    printf(" \n enter the marks of Maths out of 100 =");
     scanf("%f",&a);
    printf(" \n enter the marks of English out of 100 =");
     scanf("%f",&b);
    printf(" \n enter the marks of Hindi out of 100 =");
    scanf("%f",&c);
    printf(" \n enter the marks of Science out of 100 =");
    scanf("%f",&d);
    printf(" \n enter the marks of History out of 100 =");
    scanf("%f",&f);
     e=a+b+c+d+f;
     if(e>=165)
        printf(" \n passed");
     else
        printf(" \n failed");
     return 0;

}
