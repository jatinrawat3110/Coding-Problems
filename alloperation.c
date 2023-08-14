#include<stdio.h>
void main()
{
    int a,b,add,sub,mul,div,rem;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    rem=a%b;
    printf("add=%d\nsub=%d\nmul=%d\ndiv=%d\nrem=%d\n",add,sub,mul,div,rem);
}
