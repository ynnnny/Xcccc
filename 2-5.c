#include<stdio.h>
int main()
{
    int a,b;
    double d;
    puts("请输入两个整数。");

    printf("整数a:");
    scanf("%d",&a);

    printf("整数b:");
    scanf("%d",&b);

    d=(double)a*100/b;
    printf("a是b的%f%%",d);
    return 0;
}