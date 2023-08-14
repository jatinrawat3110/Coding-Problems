#include<stdio.h>
void main()
{
    int sum,a,b,c,d,e,x,n,y,p,q,z;
    printf("enter the number");
    scanf("%d",&n);
    a=n%10;
    x=n/10;
    b=x%10;
    x=x/10;
    c=x%10;
    x=x/10;
    d=x%10;
    x=x/10;
    e=x%10;
    x=x/10;

    printf("%d",a+b+c+d+e);
    }
