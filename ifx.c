#include<stdio.h>
void main()
{
    int x,f;
    printf("enter the value of x");
    scanf("%d",&x);
    if(0<=x && x<=10){
        f=x*(x+2);
    }
    else if(11<=x && x<=20){
        f=x*x+(2*x);
    }
    else if(21<=x && x<=30){
        f=x*x+(2*x*x);
        }
    else{
            f=0;
    }
}
