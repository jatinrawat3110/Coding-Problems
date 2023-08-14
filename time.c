#include<stdio.h>
void main()
{
    int nosec,hour ,mint,sec;
    int hourn,mintn;
    printf("enter no of seconds");
    scanf("%d",&nosec);
    hour=nosec/3600;
    hourn=nosec%3600;
    mint=hourn/60;
    mintn=hourn%60;
    sec=mintn;
    printf("hour=%d\nminute=%d\nseconds=%d",hour,mint,sec);
}
