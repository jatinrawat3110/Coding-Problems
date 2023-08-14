#include<stdio.h>
void main()
{
    int n,i,temp;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    for(i=1;i<=10;i++){
            n=temp*i;
        printf("%d*%d=%d\n",temp,i,n);
    }
}
