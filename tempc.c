#include<stdio.h>
void main()
{
    int t;
    printf("enter the temperature");
    scanf("%d",&t);
    if(t<0){
        printf("freezing");
    }
    else if (t>0 && t<=10){
        printf("very cold");
    }
    else if(10<t && t<=20){
        printf("cold");
    }
    else if(20<t && t<=30){
        printf("normal");
    }
    else if(30<t && t<=40){
        printf("hot");
    }
    else if(t>40){
        printf("very hot");
    }

}
