#include<stdio.h>
void main()
{
    int i,j,n,c=1;

    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n");
        for(j=1;j<=n;j++){
            printf("%c",(64+c));
            c++;
        }
    }
}
