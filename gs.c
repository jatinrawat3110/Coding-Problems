#include<stdio.h>
void main()
{
    float gs,bs,hra,da;;

    printf("enter t;he basic salary");
    scanf("%f",&bs);
    hra=bs*20/100;
    da=bs*40/100;
    gs=bs+hra+da;
    printf("the gross salary is %f",gs);
}
