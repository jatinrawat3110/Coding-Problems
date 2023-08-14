#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,s=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            s=s-pow(i,2);
        }
        else{
            s=s+pow(i,2);
        }
    }
    printf("%d",s);
}
