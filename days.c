//considering year have 365 days and all months have 30 days
#include<stdio.h>
void main()
{
    int nodays,year,month,day;
    int yearn,monthn;
    printf("enter number of days");
    scanf("%d",&nodays);
    year=nodays/365;
    yearn=nodays%365;
    month=yearn/30;
    monthn=yearn%30;
    day=monthn;
    printf("year=%d\nmonth=%d\nday=%d",year,month,day);
}
