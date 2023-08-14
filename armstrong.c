#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,c=0,temp,sum=0,a,temp2;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    for(i=1;temp>0;i++){
        temp=temp/10;

        c++;
    }
    temp2=n;
    for(i=1;i<=c;i++){
        a=temp2%10;
        sum=sum+pow(a,c);
        temp2=temp2/10;
    }
    printf("%d",sum);
}
