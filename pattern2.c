#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n");
        for(j=1;j<=n;j++){
            printf("%d",j+n*i);        }
    }
}
