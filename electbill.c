#include<stdio.h>
void main()
{
    int n,b;
    printf("enetre number of unit");
    scanf("%d",&n);
    if( n<=50){
        b=n*0.50;
    }
    if(50<n && n<=150){
        b=25+(n-50)*0.75;
    }
    if(150<n && n<=250){
        b=100+(n-150)*1.20;
    }
    if(n>250){
        b=220+(n-250)*1.50;
    }
    printf("%d",b);
}
