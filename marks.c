#include<stdio.h>
void main()
{
    float a,b,c,d,e,pertc,agg;
    printf("enter the marks in 5 subjects");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    agg=a+b+c+d+e;
    pertc=agg/5;
    printf("the aggregate is%f\nand the percentage is %f",agg,pertc);
}
