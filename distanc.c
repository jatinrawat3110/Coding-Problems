#include<stdio.h>
#include<math.h>
void main()
{
    int x,y,z,a,b,c;
    float d;
    printf("enter value of x y z a");
    scanf("%d%d%d%d",&x,&y,&z,&a);
    b=pow(z-x,2);
    c=pow(a-y,2);
    d=sqrt(b+c);
    printf("the distance between two points is %f",d);
    }
