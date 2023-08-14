#include<stdio.h>
void main()
{
    int dkm,fuelcon,milage;
    printf("enter the distance covered in kilometers");
    scanf("%d",&dkm);
    printf("enter the fuel consmed by the bike");
    scanf("%d",&fuelcon);
    milage=dkm/fuelcon;
    printf("the milage of the bike is %d",milage);
}
