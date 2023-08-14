#include<stdio.h>
void main()
{
    float i,fact=1,s=0,n;
    printf("enter a number");
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
        s=s+(i/fact);
    }
    printf("%f",s);
}
