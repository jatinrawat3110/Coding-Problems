#include<stdio.h>
void main()
{
    int n,c=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        c++;

    }
    printf("the number of digit are %d",c);
}
