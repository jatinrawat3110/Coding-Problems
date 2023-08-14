#include<stdio.h>
void main()
{
    int empoy_id,hours,amount,salary;
    printf("enter the employ id");
    scanf("%d",&empoy_id);
    printf("enter the working hours of thet employee ");
    scanf("%d",&hours);
    printf("enter the amount he he received per hour");
    scanf("%d",&amount);
    salary=amount*hours;
    printf("the salary of employee is %d",salary);
}
