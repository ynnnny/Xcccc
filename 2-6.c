#include<stdio.h>
int main()
{
    int h;
    double w;

    printf("请输入您的身高：");
    scanf("%d",&h);

    w=(h-100)*0.9;
    printf("您的标准体重是%.1f公斤。",w);
    return 0;
}