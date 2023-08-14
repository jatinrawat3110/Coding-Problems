#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("the swapped value of a and b are %d and %d",a,b);
}
