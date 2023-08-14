
#include<stdio.h>b
void main()
{
    float l,b,r,arear=0,areac=0 ,par=0,circum=0;
    printf("enter length breadth and radius  ");
    scanf("%f%f%f",&l,&b,&r);
    arear=l*b;
    par=2*(l+b);
    areac=3.14*r*r;
    circum=2*3.14*r;
    printf("%f%f%f%f",arear,areac,par,circum);
}
