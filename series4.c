#include<stdio.h>
void main()
{
    int i,s=0,n,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i==0){
            s=1;
            sum=1;
        }
        else{
                s=s+i+1;
                sum+=s;

        }

     }
     printf("%d",sum);
}
