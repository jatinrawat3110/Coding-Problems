//value of expression a2+b2+underootab
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,value;
    printf("enter vale of a an b");
    scanf("%d%d",&a,&b);
    value=a*a+sqrt(a*b)+b*b;
    printf("the value of the expression is %d",value);
}
