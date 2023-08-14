#include<stdio.h>
void main()
{
    float ns,bp,hra,ta,da;
    printf("enter your basic pay");
    scanf("%f",&bp);
    hra=0.1*bp;
    ta=0.05*bp;
    da=0.015*bp;
    ns=bp+hra+ta+da;
    printf("the net salary is %f",ns);
}
