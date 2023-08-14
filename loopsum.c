#include<stdio.h>
void main()
{
    int i,n,s=0,a;
    for(i=0;i<=10;i++){
        s=s+i;
        a=s/10;
    }
    printf("the sum is %d \n the average is %d",s,a);
}
