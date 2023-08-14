#include<stdio.h>
void main()
{
    float temp,a;
    printf("enter temperature");
    scanf("%f",&temp);
    a=((temp-32)*5)/9;
    printf("temperature in celsius is %f",a);
}
