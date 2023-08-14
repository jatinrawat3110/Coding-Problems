#include<stdio.h>
void main()
{
    int i,n,temp,r=0;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        r=r*10+(temp%10);
        temp=temp/10;
    }
    if(r==n){
        printf("it is a pallindrome");
    }
    else{
        printf("it is nt pallindrome");
    }
}
