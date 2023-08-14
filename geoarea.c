#include<stdio.h>
void main()
{
    int a,h,b,area,l,br,r;
    printf("enter 1 to get area of trinagle\n");
    printf("enter 2 to get area of rectangle\n");
    printf("enter 3 to get area of circle\n");
    printf("enter your choice");
    scanf("%d",&a);
    switch(a){
case 1:
    printf("enter height and base of the triangle");
    scanf("%d%d",&h,&b);
    area=0.5*b*h;
    printf("%d",area);
    break;
case 2:
    printf("enter the length and breadth");
    scanf("%d%d",&l,&br);
    area=l*b;
    printf("%d",area);
    break;
case 3:
    printf("enter the radius" );
    scanf("%d",&r);
    area=3.14*r*r;
    printf("%d",area);
    break;
default:
    printf("invalid input");
    }
    }

