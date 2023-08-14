#include<stdio.h>
void main()
{
    int i,n,a=0;
    printf("enter the number whose table you want to print");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        a=n*i;
        printf("%d*%d=%d\n",n,i,a);

    }
}
