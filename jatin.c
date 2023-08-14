#include<stdio.h>
void main()
{
int x1,x2,x3,y1,y2,y3,m,n;
printf("enter x1/y1\n");
scanf("%d%d",&x1,&y1);
printf("enter x2/y2\n");
scanf("%d%d",&x2,&y2);
printf("enter x3/y3\n");
scanf("%d%d",&x3,&y3);
m=(y2-y1)/(x2-x1);
n=(y3-y2)/(x3-x2);
 if(m==n){
  printf("three points are collinear");
 }
    else{
        printf("the points are not collinear");
    }
    //printf("%d",m);
}
