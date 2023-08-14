#include<stdio.h>
void main()
{
    int temp,i,sum=0,a,b,c=0,d,e,x,n,y,p,q,z;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        temp=temp/10;
        c++;
    }

    for(i=1;i<=c;i++){
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("%d",sum);
}
