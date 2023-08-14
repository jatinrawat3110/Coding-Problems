#include<stdio.h>
void main()
{
    int n,r=0,a,temp;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        a=temp%10;
        r=r*10+a;
        temp=temp/10;
    }
    printf("%d\n",r);
    printf("%d",n);
    if(temp=r){
        printf("the number is palindrome");
    }
    else{
        printf("not a p[alindrome");
    }
}

