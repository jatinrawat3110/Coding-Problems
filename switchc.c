#include<stdio.h>
void main()
{
    int c,a,b,answer;
    printf("enter 1 for addition\n");
    printf("enter 2 for substracting\n");
    printf("enter 3 for multiplication\n");
    printf("enter 4 for division\n");
    printf("enter 5 for mod");
    scanf("%d",&c);

    switch(c){
    case 1:
        printf("enter a and b");
        scanf("%d%d",&a,&b);
        answer=a+b;
        printf("%d",answer);
        break;
    case 2:
        printf("enter a and b");
        scanf("%d%d",&a,&b);
        answer=a-b;
        printf("%d",answer);
        break;
    case 3:
        printf("enter a and b");
        scanf("%d%d",&a,&b);
        answer =a*b;
        printf("%d",answer);
        break;
    case 4:
        printf("enter a and b");
        scanf("%d%d",&a,&b);
        answer=a/b;
        printf("%d",answer);
        break;
    case 5:
        printf("enter a and b");
        scanf("%d%d",&a,&b);
        answer=a%b;
        printf("%d",answer);
        break;
    default:
        printf("invalid input");
        break;
    }
}
