#include<stdio.h>
int main()
{
    int A,B;
    puts("请输入两个整数。");

    printf("整数A:");
    scanf("%d",&A);

    printf("整数B:");
    scanf("%d",&B);

    if(A%B==0)
        puts("B是A的约数。");
    else
        puts("B不是A的约数。");

    return 0;
}