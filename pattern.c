#include<stdio.h>
void main()
{
    int i,n,j;
    printf("enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            printf("\n");
        for(j=1;j<=n;j++){
            printf("*");
        }
    }
}
