#include<stdio.h>
void main()
{
    int i,n,f=1;
    printf("enter the number whose factorial you want to enter");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            f=f*i;
            printf("%d",i);
            if(i<n){
                printf("*");
            }
    }
    printf("factorial of the number is %d",f);
}
