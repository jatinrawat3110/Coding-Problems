#include<stdio.h>
void main()
{
    char c;
    printf("enter the character");
    scanf("%c",&c);
    if(c>=65 && c<=90){
        printf("character is in upper case");
    }
    else if(c>=97 && c<=122){
        printf("the character is in lower case");
    }
    else{
        printf("invalid input");
    }
}
