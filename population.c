#include<stdio.h>
void main()
{
    float tp,tm,tw,li,lim,liw,illim,illiw;
    printf("enter total number of population");
    scanf("%f",&tp);
    tm=(52/100.0)*tp;
    tw=tp-tm;
    li=(48/100.0)*tp;
    lim=(35/100.0)*tp;
    liw=li-lim;
    illim=tm-lim;
    illiw=tw-liw;
    printf("the total number of illiterate men are:%g\n the total number of illoterate woman are:%g",illim,illiw);
}


