#include<stdio.h>
void main()
{
    int i,n,sum=0,a=1;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        a=a+a*i;
        sum=sum+a;
    }
    printf("%d",sum);
}
