#include<stdio.h>
void main()
{
    int m;
    printf("enter the month");
    scanf("%d",&m);
    if(m==1 || m==3 || m== 5 || m==7 || m==8 || m==10 || m==12){
        printf("the month has 31 days");
    }
    else if(m==4 || m==6 || m==9 || m==11){
        printf("the month has 30 days");
    }
    else if(m==2){
        printf("the month has 28/29 days");
    }
    else{
        printf("invalid input");
    }
}
