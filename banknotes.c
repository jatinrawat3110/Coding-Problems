#include<stdio.h>
void main()
{
    int amt,hun,fif,twen,ten,five,two,one;
    int hunn,fifn,twenn,tenn,fiven,twon,onen;
    printf("enter the amount");
    scanf("%d",&amt);
    hun=amt/100;
    hunn=amt%100;
    fif=hunn/50;
    fifn=hunn%50;
    twen=fifn/20;
    twenn=fifn%20;
    ten=twenn/10;
    tenn=twenn%10;
    five=tenn/5;
    fiven=tenn%5;
    two=fiven/2;
    twon=fiven%2;
    one=twon;
    printf("hundred notes are %d\n",hun);
    printf("fivety notes are %d\n",five);
    printf("twenty notes are %d\n",twen);
    printf("ten notes are %d\n",ten);
    printf("five notes are %d\n",five);
    printf("the two are %d\n",two);
    printf("one notes are %d",twon);
}
