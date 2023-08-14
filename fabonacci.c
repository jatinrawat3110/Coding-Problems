#include<stdio.h>
void main()
{
    int g,i,n,i1=0,i2=1;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d%d",i1,i2);
    for(i=2;i<n;i++){
        g=i1+i2;
        i1=i2;
        i2=g;
        printf("%d",g);
    }

}
