#include<stdio.h>
void main()
{
    int i,sume=0,sumo=0;
    for(i=1;i<=100;i++){
        if(i%2==0){
            sume=sume+i;
        }
        else{
            sumo=sumo+i;
        }
    }
    printf("sum of even numbers is %d\n sum of odd number is %d",sume,sumo);
}
