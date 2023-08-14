#include<stdio.h>
void main()
{
    int i,j,n,sum=1;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){

            sum=sum+(i*(i-1));
        }


    printf("%d",sum);
}
