#include<stdio.h>
void main()
{
    int a,b;
    printf("enter value of anad b");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swapped value of and b are %d and %d",a,b);
}
