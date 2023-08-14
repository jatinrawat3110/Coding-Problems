#include<stdio.h>
void main()
{
    int i,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("not a prime number");
            break;
        }
        else{
            printf("it is a prime number");
            break;
        }
    }
    if(n==2){
            printf("it is a prime number");
        }
    else if(n==1){
        printf("is not a prime number");
    }
    else{
        printf("invalid input");
    }

}
