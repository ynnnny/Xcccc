#include<stdio.h>
int main()
{
    int a,b,c,min;
    puts("请输入三个整数。");

    printf("整数a:");    scanf("%d",&a);
    printf("整数b:");    scanf("%d",&b);
    printf("整数c:");    scanf("%d",&c);

    min=a;
    if(b<min)
    {b=min;}
    if(c<min)
    {c=min;}

    printf("%d",min);
    return 0;
}